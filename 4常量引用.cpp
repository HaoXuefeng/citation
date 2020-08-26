#include <iostream>
using namespace std;
//						常量引用主要用来修饰形参，防止误操作
//							在函数形参列表中，可以加 const 来修饰形参，防止形参改变实参

//示例
void showValue(const int& v) {
	//v += 10;			//会报错，因为加了 const 修饰，v 的值不能改变
	cout << "v: " << v << endl;
}

int main()
{
	//int& ref = 10;	//	报错。因为引用是一个指针常量，需要指向一块内存地址，直接指向常量会报错
	
	//加入 const 就可以了,为什么？	
	const int& ref = 10;

	//编译器会自动将代码修改为：int temp = 10; const int& ref = temp; 这里的temp并不是原名，原名不存在

	//ref = 20;		//	报错。因为是这种引用相当于 const int* const ref = 10; ref 的指向地址 和 指向地址的值 都是不能修改的。

	int a = 100;

	showValue(a);



	system("pause");
	return 0;
}