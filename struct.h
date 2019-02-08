#include<iostream>
using namespace std;
struct Train
{
	char num[5]{};
	int max;
	char plat[20][10]{};
	Train* next;
};
extern Train* head;
void print(Train* h);