#include<iostream>
#include"struct.h"
using namespace std;
Train* head;
void print(Train* h)
{
	for (Train* p = h->next; p != NULL; p = p->next)
	{
		for (int i = 0; i < 4; i++)
		{
			if (p->num[i] != 0)
				cout << p->num[i];
			else
				break;
		}
		cout << ',';
		cout << p->max;
		for (int i = 0; p->plat[i][0] != 0; i++)
			cout << '|' << p->plat[i];
		cout << '|' << endl;
	}
	cout << endl;
}