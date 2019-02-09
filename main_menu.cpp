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
	while (cout << "请选择你所需要的功能：")
	{
		int num2;
		cin >> num2;
		if (num2 != 3)
		{
			switch (num2)
			{
			case 1:cout << "你已选择“添加/修改班次”功能\n\n"; addList(head); break;
			case 2:cout << "你已选择“删除班次”功能\n\n"; deleteList(head); break;
			default:cout << "输入错误，请重新选择服务\n\n";
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
	while (cout << "请选择你所需要的功能：")
	{
		int num3;
		cin >> num3;
		if (num3 != 3)
		{
			switch (num3)
			{
			case 1:cout << "你已选择“按班次查询”功能\n\n"; num(head); break;
			case 2:cout << "你已选择“按出发/到达站查询”功能\n\n"; station(head); break;
			default:cout << "输入错误，请重新选择服务\n\n";
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
	while (cout << "请选择你所需要的功能：")
	{
		int num4;
		cin >> num4;
		if (num4 != 4)
		{
			switch (num4)
			{
			case 1:cout << "你已选择“售票”功能\n\n"; sellList(); break;
			case 2:cout << "你已选择“订单浏览”功能\n\n"; view(orderh); break;
			case 3:cout << "你已选择“退票”功能\n\n"; returnTicket(orderh); break;
			default:cout << "输入错误，请重新选择服务\n\n";
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
	while (cout << "请选择你所需要的功能：")
	{
		int num2;
		cin >> num2;
		if (num2 != 3)
		{
			switch (num2)
			{
			case 1:cout << "你已选择“输出火车信息”功能\n\n"; output_train(head); break;
			case 2:cout << "你已选择“输出订单信息”功能\n\n"; output_order(orderh); break;
			default:cout << "输入错误，请重新选择服务\n\n";
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

void init_main()										//系统主菜单初始化
{
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    1.录入班次信息    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    2.操作班次信息    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    3.查询班次信息    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    4.售票与退票系统  |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    5.导出票务信息    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    6.退出系统        |" << endl;
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
	cout << "|    1.添加/修改班次   |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    2.删除班次        |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    3.返回主菜单      |" << endl;
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
	cout << "|     1.按班次查询         |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     2.按出发/到达站查询  |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     3.返回主菜单         |" << endl;
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
	cout << "|     1.售票           |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     2.订单浏览       |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     3.退票           |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|     4.返回主菜单     |" << endl;
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
	cout << "|    1.输出火车信息    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    2.输出订单信息    |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	cout << "|    3.返回主菜单      |" << endl;
	for (int i = 0; i < 15; i++)
		cout << " ";
	for (int i = 0; i < 24; i++)
		cout << "-";
	cout << endl << endl;
}