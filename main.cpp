#include<iostream>
#include<cstring>
#include"struct.h"
#include "input_save.h"
#include"main_menu.h"
using namespace std;
int main()
{
	init_main();
	while (cout << "��ѡ��������Ҫ�Ĺ��ܣ�")
	{
		int num1;
		cin >> num1;
		if (num1 != 6)
		{
			switch (num1)
			{
			case 1:cout << "����ѡ��¼������Ϣ������\n\n"; input(); break;
			case 2:cout << "����ѡ�񡰲��������Ϣ������\n\n"; operate(); break;
			case 3:cout << "����ѡ�񡰲�ѯ�����Ϣ������\n\n"; search(); break;
			case 4:cout << "����ѡ����Ʊ����Ʊϵͳ������\n\n"; sell(); break;
			case 5:cout << "����ѡ�񡰵���Ʊ����Ϣ������\n\n"; save(); break;
			default:cout << "�������������ѡ�����\n\n";
			}
		}
		else
			break;
	}
	cout << "�����˳�ϵͳ\n";
	return 0;
}