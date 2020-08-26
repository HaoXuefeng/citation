/*
		注意事项：	引用必须初始化
					引用在初始化之后，不可以改变

		tips:	引用的本质是封装好的指针常量，相当于 int* const p = &a;		即，p 的指向不能被修改，但可以通过 p 修改 a 的值
*/

#include <iostream>
using namespace std;

int main2()
{
	int a = 10;
	int b = 20;

	//int& c;	//报错，引用必须初始化

	int& c = a;	//一旦初始化之后不能更改		不能再写 int& c = b  这种初始化操作

	c = b;		//这是赋值操作，不是更改

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}

