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
	{
		cout << p->num << ',' << p->max;
		for (int i = 0; p->plat[i][0] != 0; i++)
			cout << '|' << p->plat[i];
		cout << '|';
		cout << endl << endl;
	}
	else
		cout << "该班次不存在！\n";
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
	Train* p = h->next;
	int i = 0;
	char a[10][5]{};
	while (p != NULL)
	{
		if (!strcmp(p->plat[0], begin))
		{
			int j = 0;
			while (p->plat[j][0] != 0)
				j++;
			if (!strcmp(p->plat[j - 1], end))
			{
				strcpy_s(a[i], p->num);
				i++;
			}
		}
		p = p->next;
	}
	if (a[0][0] == 0)
		cout << "该班次不存在！\n\n";
	else if (a[1][0] == 0)
	{
		Train* q = h->next;
		while (q != NULL && strcmp(q->num, a[0]))
			q = q->next;
		cout << q->num << ',' << q->max;
		for (int i = 0; q->plat[i][0] != 0; i++)
			cout << '|' << q->plat[i];
		cout << '|';
		cout << endl << endl;
	}
	else
	{
		int min;
		for (int i = 0; a[i + 1][0] != 0; i++)
		{
			min = i;
			for (int j = i + 1; a[j][0] != 0; j++)
			{
				if (strcmp(a[min], a[j]) > 0)
					min = j;
			}
			if (min != i)
			{
				char temp[5];
				strcpy_s(temp, a[min]);
				strcpy_s(a[min], a[i]);
				strcpy_s(a[i], temp);
			}
		}
		for (int t = 0; a[t][0] != 0; t++)
		{
			Train* q = h->next;
			while (strcmp(q->num, a[t]))
				q = q->next;
			cout << q->num << ',' << q->max;
			for (int s = 0; q->plat[s][0] != 0; s++)
				cout << '|' << q->plat[s];
			cout << '|';
			cout << endl;
		}
		cout << endl;
	}
}