/*
		ע�����	���ñ����ʼ��
					�����ڳ�ʼ��֮�󣬲����Ըı�

		tips:	���õı����Ƿ�װ�õ�ָ�볣�����൱�� int* const p = &a;		����p ��ָ���ܱ��޸ģ�������ͨ�� p �޸� a ��ֵ
*/

#include <iostream>
using namespace std;

int main2()
{
	int a = 10;
	int b = 20;

	//int& c;	//�������ñ����ʼ��

	int& c = a;	//һ����ʼ��֮���ܸ���		������д int& c = b  ���ֳ�ʼ������

	c = b;		//���Ǹ�ֵ���������Ǹ���

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}

