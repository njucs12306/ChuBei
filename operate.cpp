#include<iostream>
#include<cstring>
#include"struct.h"
#include"sell.h"
using namespace std;

void addList(Train* h)												//���/�޸İ��
{
	cout << "��������Ϣ��\n";
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
		cout << "�޸ĳɹ���\n\n";
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
		cout << "��ӳɹ���\n\n";
		print(head);
	}
}
void deleteList(Train* h) 											//ɾ�����
{
	cin.get();
	cout << "�����κţ�\n";
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
		cout << "�ð�β����ڣ�\n\n";
	else if (p->next == NULL)
	{
		Order* q = orderh->next;
		while (q != NULL && strcmp(q->num, p->num))
			q = q->next;
		if (q != NULL)
			cout << "�ð���г˿͹�Ʊ���޷�ɾ����\n\n";
		else
		{
			pre->next = NULL;
			delete p;
			cout << "ɾ���ɹ���\n\n";
		}
	}
	else
	{
		Order* q = orderh->next;
		while (q != NULL && strcmp(q->num, p->num))
			q = q->next;
		if (q != NULL)
			cout << "�ð���г˿͹�Ʊ���޷�ɾ����\n\n";
		else
		{
			pre->next = p->next;
			delete p;
			cout << "ɾ���ɹ���\n\n";
		}
	}
	print(head);
}