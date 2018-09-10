#include<iostream>
using namespace std;

//初始化方式
void Test()
{
	int x1 = 1;			//C
	int x2 = { 2 };		//C++11
	int x3{ 3 };
	int x4(5);
}

int main()
{
	Test();
	return 0;
}