/*
		���õĻ���ʹ��
					���ã������������
					�﷨���������� &���� = ԭ��
*/


#include <iostream>
using namespace std;

int main1()
{
	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a��ַΪ��" << &a << endl;
	cout << "b��ַΪ��" << &b << endl;
	//���Է��֣����� a �ĵ�ַ�ͱ��� b �ĵ�ַ����ͬ�ģ�����a �� b ��ͬһ��������b ������ a������˵ b �� a �ı���

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	a = 200;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//	a �� b ����һ���ı䣬��һ��Ҳ��ı䣬��Ϊ������ͬһ��������ֻ�ǳƺ���ͬ����

	system("pause");
	return 0;
}