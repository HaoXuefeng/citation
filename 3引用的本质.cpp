#include <iostream>
using namespace std;

						//���õı�����C++�ڲ�ʵ����һ��ָ�볣��

void func(int& ref)	//���������ã�ת��Ϊ int* const ref = &(����Ĳ���);
{
	ref = 100;	//ref �����ã��Զ�ת��Ϊ��*ref = 100;
}

int main5()
{
	int a = 10;
	
	int& ref = a;	//�Զ�ת��Ϊ�� int* const ref = & a;

	ref = 20;	//�ڲ����� ref �����ã��Զ�������ת��Ϊ�� *ref = 20;

	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);
	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	system("pause");
	return 0;
}