#include <iostream>
using namespace std;

						//引用的本质在C++内部实现是一个指针常量

void func(int& ref)	//发现是引用，转换为 int* const ref = &(传入的参数);
{
	ref = 100;	//ref 是引用，自动转换为：*ref = 100;
}

int main5()
{
	int a = 10;
	
	int& ref = a;	//自动转化为： int* const ref = & a;

	ref = 20;	//内部发现 ref 是引用，自动帮我们转换为： *ref = 20;

	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);
	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	system("pause");
	return 0;
}