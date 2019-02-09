#include<iostream>
#include<cstring>
#include"struct.h"
using namespace std;
Order* createOrder()
{
	Order* order_h = new Order;
	order_h->NO = 0;
	order_h->next = NULL;
	return order_h;
}
Order* orderh = createOrder();
void sellList()												//售票
{
	cin.get();
	cout << "请输入出发站：";
	char a[10];
	cin.getline(a, 10);
	cout << "请输入到达站：";
	char b[10];
	cin.getline(b, 10);
	Train* p = head->next;
	int hhh = 0;
	while (p != NULL)
	{
		if (!strcmp(p->plat[0], a))
		{
			int j = 0;
			while (p->plat[j][0] != 0)
				j++;
			if (!strcmp(p->plat[j - 1], b))
			{
				cout << p->num << ',' << p->max;
				for (int i = 0; p->plat[i][0] != 0; i++)
					cout << '|' << p->plat[i];
				cout << '|';
				cout << endl;
				hhh++;
			}
		}
		p = p->next;
	}
	if (hhh == 0)
	{
		cout << "该班次不存在！\n\n";
		return;
	}
	cout << endl;
	cout << "请输入班次号：\n";
	char myNum[5];
	cin.getline(myNum, 5);
	cout << "请输入所需购买票数：\n";
	int mycount;
	cin >> mycount;
	Order* q = new Order;
	Order* pre = orderh;
	while (pre->next != NULL)
		pre = pre->next;
	pre->next = q;
	q->NO = pre->NO + 1;
	strcpy_s(q->num, myNum);
	strcpy_s(q->first, a);
	strcpy_s(q->last, b);
	q->count = mycount;
	q->next = NULL;
	cout << "购票成功！\n\n";
}
void view(Order* h)													//订单浏览
{
	cout << "订单号\t" << "车次\t" << "出发站\t   " << "到达站\t" << "票数\n";
	for (Order* p = h->next; p != NULL; p = p->next)
	{
		cout << p->NO << "\t" << p->num << "\t" << p->first << "\t   " << p->last << "\t" << p->count;
		cout << endl;
	}
	cout << endl;
}
void returnTicket(Order* h)											//退票
{
	cout << "请输入订单号：\n";
	int a;
	cin >> a;
	Order* p = new Order;
	p = h->next;
	Order* pre = h;
	while (p != NULL && p->NO != a)
	{
		p = p->next;
		pre = pre->next;
	}
	if (p == NULL)
	{
		cout << "该订单不存在！";
		delete p;
	}
	else if (p->next == NULL)
	{
		pre->next = NULL;
		delete p;
	}
	else
	{
		pre->next = p->next;
		delete p;
	}
}