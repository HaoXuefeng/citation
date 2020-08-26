/*
		引用的基本使用
					作用：给变量起别名
					语法：数据类型 &别名 = 原名
*/


#include <iostream>
using namespace std;

int main1()
{
	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a地址为：" << &a << endl;
	cout << "b地址为：" << &b << endl;
	//可以发现，变量 a 的地址和变量 b 的地址是相同的，即，a 和 b 是同一个变量，b 引用了 a，或者说 b 是 a 的别名

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	a = 200;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//	a 和 b 任意一个改变，另一个也会改变，因为他们是同一个变量，只是称呼不同罢了

	system("pause");
	return 0;
}