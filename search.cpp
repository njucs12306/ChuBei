#include<iostream>
#include"struct.h"
using namespace std;

void num(Train* h)													//����β�ѯ
{
	cin.get();
	cout << "�����κţ�\n";
	char a[5];
	cin.getline(a, 5);
	Train* p = h->next;
	while (p != NULL && strcmp(p->num, a))
		p = p->next;
	if (p != NULL)
		cout << p->num << ',' << p->max;
}
void station(Train* h)												//������/����վ��ѯ
{
	cin.get();
	cout << "�������/����վ������ĸ��д��\n" << "����վ��";
	char begin[10];
	cin.getline(begin, 10);
	cout << "����վ��";
	char end[10];
	cin.getline(end, 10);
}