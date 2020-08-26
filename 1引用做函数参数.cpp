#include <iostream>
using namespace std;

				//	函数传参时，可以利用引用的技术让形参修饰实参
				//	可以简化指针修改实参
//值传递
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//地址传递
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//引用
void swap03(int& a,int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3()
{
	int a = 10, b = 20;
	swap01(a, b);
	cout << a << "\t" << b << endl;		//	值传递形参不修饰实参，实参不发生改变
	swap02(&a, &b);
	cout << a << "\t" << b << endl;		//	地址传递形参修饰实参，实参交换
	swap03(a, b);
	cout << a << "\t" << b << endl;		//	引用做形参也会修饰实参，实参交换


	system("pause");
	return 0;
}
