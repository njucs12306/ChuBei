#include<iostream>
#include<cstring>
#include"struct.h"
#include "input_save.h"
#include"main_menu.h"
using namespace std;
int main()
{
	init_main();
	while (cout << "请选择你所需要的功能：")
	{
		int num1;
		cin >> num1;
		if (num1 != 6)
		{
			switch (num1)
			{
			case 1:cout << "你已选择“录入班次信息”功能\n\n"; input(); break;
			case 2:cout << "你已选择“操作班次信息”功能\n\n"; operate(); break;
			case 3:cout << "你已选择“查询班次信息”功能\n\n"; search(); break;
			case 4:cout << "你已选择“售票与退票系统”功能\n\n"; sell(); break;
			case 5:cout << "你已选择“导出票务信息”功能\n\n"; save(); break;
			default:cout << "输入错误，请重新选择服务\n\n";
			}
		}
		else
			break;
	}
	cout << "你已退出系统\n";
	return 0;
}