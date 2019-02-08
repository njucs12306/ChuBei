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
	cout << "请输入文件名：";
	char filename[20];
	cin >> filename;
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "文件不存在！\n" << "3秒后退出系统\n";
		Sleep(3 * 1000);
		exit(EXIT_FAILURE);
	}
	else
		cout << "文件打开成功，正在录入信息……\n";
	head = createList();
	cout << "信息录入成功！\n\n";
	print(head);
	infile.close();
}
void output_train(Train* h)									//输出火车信息
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
	cout << "火车信息输出成功！\n";
	cout << endl;
}
void output_order(Train* h)											//输出订单
{
	;
}