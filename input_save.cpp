#include<iostream>
#include<Windows.h>
#include<fstream>
#include"struct.h"
using namespace std;
ifstream infile;
ofstream outfile;
Train* createList()
{
	Train* head = new Train;
	head->num[0] = head->num[1] = head->num[2] = 'F';
	head->next = NULL;
	Train* tail = head;
	Train* pretail = head;
	while (infile.good())
	{
		Train* p = new Train;
		for (int i = 0; i < 4; i++)
			infile >> p->num[i];
		if (p->num[3] == ',')
			p->num[3] = 0;
		else
			infile.get();
		infile >> p->max;
		infile.clear();
		infile.get();
		infile >> p->plat[0][0];
		char a = p->plat[0][0];
		int i = 0;
		int j = 0;
		while (a != '\n' && infile.good())
		{
			p->plat[i][j] = a;
			while (p->plat[i][j] != '|')
			{
				j++;
				infile >> p->plat[i][j];
			}
			p->plat[i][j] = 0;
			i++;
			j = 0;
			a = infile.get();
		}
		p->next = NULL;
		tail->next = p;
		pretail = tail;
		tail = p;
	}
	pretail->next = NULL;
	return head;
}
void input()
{
	cout << "�������ļ�����";
	char filename[20];
	cin >> filename;
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "�ļ������ڣ�\n" << "3����˳�ϵͳ\n";
		Sleep(3 * 1000);
		exit(EXIT_FAILURE);
	}
	else
		cout << "�ļ��򿪳ɹ�������¼����Ϣ����\n";
	head = createList();
	cout << "��Ϣ¼��ɹ���\n\n";
	print(head);
	infile.close();
}
void output_train(Train* h)									//�������Ϣ
{
	outfile.open("finish.txt");
	for (Train* p = h->next; p != NULL; p = p->next)
	{
		for (int i = 0; i < 4; i++)
		{
			if (p->num[i] != 0)
				outfile << p->num[i];
			else
				break;
		}
		outfile << ',';
		outfile << p->max;
		for (int i = 0; p->plat[i][0] != 0; i++)
			outfile << '|' << p->plat[i];
		outfile << '|' << endl;
	}
	outfile.close();
	cout << "����Ϣ����ɹ���\n";
	cout << endl;
}
void output_order(Train* h)											//�������
{
	;
}