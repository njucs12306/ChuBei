#pragma once
#include<iostream>
using namespace std;
struct Train
{
	char num[5]{};
	int max;
	char plat[20][10]{};
	Train* next;
};
struct Order
{
	int NO;
	char num[5]{};
	char first[10]{};
	char last[10]{};
	int count;
	Order* next;
};
extern Train* head;

void print(Train* h);