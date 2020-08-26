#include <iostream>
using namespace std;
						//	引用是可以作为函数返回值存在的
						//	注意：不要返回局部变量引用（为什么？）
//返回局部变量引用
//int& test01() {		//返回值类型是引用，所以要 int&
//	int a = 10;		//	局部变量在栈区，会在函数执行结束之后释放，这时候返回局部变量的值
//	return a;
//}

//特殊用法：函数的调用可以作为左值	
//返回静态变量引用
int& test02() {
	static int a = 10;		//	静态变量是在全局区的，全局区的数据在程序结束后系统释放
	return a;
}

int main4()
{
	/*int a = test01();			//	这里用变量 a 接收return的值，a 的值就已经确定了，所以一直是10
	cout << a << endl;
	cout << a << endl;*/

	//int& b = test01();			//	用引用来接收 return 的值，b 就是局部变量的别名，但局部变量在执行一次之后释放了
	//cout << b << endl;			//	第一次是 10，是因为编译器做了一次保留
	//cout << b << endl;			//	所以第二次之后打印的就不是 10 了


	int& c = test02();
	cout << c << endl;
	cout << c << endl;

	//函数调用做左值
	test02() = 1000;		//函数返回的是变量 a，此时相当于对 a 进行了一个赋值操作，相当于 a = 1000;
	cout << c << endl;		//变量 c 在定义时是引用 test02 的返回值，即 c 是 a 的别名
	cout << c << endl;

	system("pause");
	return 0;
}