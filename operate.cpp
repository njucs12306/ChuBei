#include<iostream>
#include<cstring>
#include"struct.h"
#include"sell.h"
using namespace std;

void addList(Train* h)												//添加/修改班次
{
	cout << "输入班次信息：\n";
	char a[5]{};
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	if (a[3] == ',')
		a[3] = 0;
	Train * p = h->next;
	Train * pre = h;
	while (p != NULL && strcmp(p->num, a))
	{
		p = p->next;
		pre = pre->next;
	}
	if (p != NULL)
	{
		if (a[3] == 0)
		{
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 10; j++)
					p->plat[i][j] = 0;
			}
			strcpy_s(p->num, a);
			cin >> p->max;
			cin.clear();
			cin.get();
			cin >> p->plat[0][0];
			char b = p->plat[0][0];
			int i = 0;
			int j = 0;
			while (b != '\n')
			{
				p->plat[i][j] = b;
				while (p->plat[i][j] != '|')
				{
					j++;
					cin >> p->plat[i][j];
				}
				p->plat[i][j] = 0;
				i++;
				j = 0;
				b = cin.get();
			}
		}
		else
		{
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 10; j++)
					p->plat[i][j] = 0;
			}
			strcpy_s(p->num, a);
			cin.get();
			cin >> p->max;
			cin.clear();
			cin.get();
			cin >> p->plat[0][0];
			char b = p->plat[0][0];
			int i = 0;
			int j = 0;
			while (b != '\n')
			{
				p->plat[i][j] = b;
				while (p->plat[i][j] != '|')
				{
					j++;
					cin >> p->plat[i][j];
				}
				p->plat[i][j] = 0;
				i++;
				j = 0;
				b = cin.get();
			}
		}
		cout << "修改成功！\n\n";
		print(head);
	}
	else
	{
		Train* q = new Train;
		strcpy_s(q->num, a);
		if (q->num[3] != 0)
			cin.get();
		cin >> q->max;
		cin.clear();
		cin.get();
		cin >> q->plat[0][0];
		char a = q->plat[0][0];
		int i = 0;
		int j = 0;
		while (a != '\n')
		{
			q->plat[i][j] = a;
			while (q->plat[i][j] != '|')
			{
				j++;
				cin >> q->plat[i][j];
			}
			q->plat[i][j] = 0;
			i++;
			j = 0;
			a = cin.get();
		}
		pre->next = q;
		q->next = NULL;
		cout << "添加成功！\n\n";
		print(head);
	}
}
void deleteList(Train* h) 											//删除班次
{
	cin.get();
	cout << "输入班次号：\n";
	char a[5]{};
	cin.getline(a, 5);
	if (a[3] == ',')
		a[3] = 0;
	Train * p = new Train;
	p = h->next;
	Train * pre = h;
	while (p != NULL && strcmp(p->num, a))
	{
		p = p->next;
		pre = pre->next;
	}
	if (p == NULL)
		cout << "该班次不存在！\n\n";
	else if (p->next == NULL)
	{
		Order* q = orderh->next;
		while (q != NULL && strcmp(q->num, p->num))
			q = q->next;
		if (q != NULL)
			cout << "该班次有乘客购票，无法删除！\n\n";
		else
		{
			pre->next = NULL;
			delete p;
			cout << "删除成功！\n\n";
		}
	}
	else
	{
		Order* q = orderh->next;
		while (q != NULL && strcmp(q->num, p->num))
			q = q->next;
		if (q != NULL)
			cout << "该班次有乘客购票，无法删除！\n\n";
		else
		{
			pre->next = p->next;
			delete p;
			cout << "删除成功！\n\n";
		}
	}
	print(head);
}