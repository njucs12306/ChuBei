#include<iostream>
#include"struct.h"
#include"operate.h"
#include"search.h"
#include"sell.h"
#include"input_save.h"
using namespace std;

void init_main();
void init_2();
void init_3();
void init_4();
void init_5();

void operate()
{
	system("cls");
	init_2();
	while (cout << "��ѡ��������Ҫ�Ĺ��ܣ�")
	{
		int num2;
		cin >> num2;
		if (num2 != 3)
		{
			switch (num2)
			{
			case 1:cout << "����ѡ�����/�޸İ�Ρ�����\n\n"; addList(head); break;
			case 2:cout << "����ѡ��ɾ����Ρ�����\n\n"; deleteList(head); break;
			default:cout << "�������������ѡ�����\n\n";
			}
		}
		else
		{
			system("cls");
			init_main();
			return;
		}
	}
}
void search()
{
	system("cls");
	init_3();
	while (cout << "��ѡ��������Ҫ�Ĺ��ܣ�")
	{
		int num3;
		cin >> num3;
		if (num3 != 3)
		{
			switch (num3)
			{
			case 1:cout << "����ѡ�񡰰���β�ѯ������\n\n"; num(head); break;
			case 2:cout << "����ѡ�񡰰�����/����վ��ѯ������\n\n"; station(head); break;
			default:cout << "�������������ѡ�����\n\n";
			}
		}
		else
		{
			system("cls");
			init_main();
			return;
		}
	}
}
void sell()
{
	system("cls");
	init_4();
	while (cout << "��ѡ��������Ҫ�Ĺ��ܣ�")
	{
		int num4;
		cin >> num4;
		if (num4 != 4)
		{
			switch (num4)
			{
			case 1:cout << "����ѡ����Ʊ������\n\n"; sellList(); break;
			case 2:cout << "����ѡ�񡰶������������\n\n"; view(orderh); break;
			case 3:cout << "����ѡ����Ʊ������\n\n"; returnTicket(orderh); break;
			default:cout << "�������������ѡ�����\n\n";
			}
		}
		else
		{
			system("cls");
			init_main();
			return;
		}
	}
}
void save()
{
	system("cls");
	init_5();
	while (cout << "��ѡ��������Ҫ�Ĺ��ܣ�")
	{
		int num2;
		cin >> num2;
		if (num2 != 3)
		{
			switch (num2)
			{
			case 1:cout << "����ѡ���������Ϣ������\n\n"; output_train(head); break;
			case 2:cout << "����ѡ�����������Ϣ������\n\n"; output_order(orderh); break;
			default:cout << "�������������ѡ�����\n\n";
			}
		}
		else
		{
			system("cls");
			init_main();
			return;
		}
	}
}

void init_main()										//ϵͳ���˵���ʼ��
{
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    1.¼������Ϣ    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    2.���������Ϣ    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    3.��ѯ�����Ϣ    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    4.��Ʊ����Ʊϵͳ  |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    5.����Ʊ����Ϣ    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    6.�˳�ϵͳ        |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl << endl;
}
void init_2()
{
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    1.���/�޸İ��   |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    2.ɾ�����        |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    3.�������˵�      |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl << endl;
}
void init_3()
{
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 28; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     1.����β�ѯ         |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     2.������/����վ��ѯ  |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     3.�������˵�         |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 28; i++)
		cout << "-";
	cout << endl << endl;
}
void init_4()
{
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     1.��Ʊ           |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     2.�������       |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     3.��Ʊ           |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     4.�������˵�     |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl << endl;
}
void init_5()
{
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    1.�������Ϣ    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    2.���������Ϣ    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    3.�������˵�      |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl << endl;
}