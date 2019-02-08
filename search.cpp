#include<iostream>
#include"struct.h"
using namespace std;

void num(Train* h)													//按班次查询
{
	cin.get();
	cout << "输入班次号：\n";
	char a[5];
	cin.getline(a, 5);
	Train* p = h->next;
	while (p != NULL && strcmp(p->num, a))
		p = p->next;
	if (p != NULL)
		cout << p->num << ',' << p->max;
}
void station(Train* h)												//按出发/到达站查询
{
	cin.get();
	cout << "输入出发/到达站（首字母大写）\n" << "出发站：";
	char begin[10];
	cin.getline(begin, 10);
	cout << "到达站：";
	char end[10];
	cin.getline(end, 10);
}