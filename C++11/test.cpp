#include<iostream>
using namespace std;

//��ʼ����ʽ
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