#include <iostream>
using namespace std;

				//	��������ʱ�������������õļ������β�����ʵ��
				//	���Լ�ָ���޸�ʵ��
//ֵ����
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//��ַ����
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//����
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
	cout << a << "\t" << b << endl;		//	ֵ�����ββ�����ʵ�Σ�ʵ�β������ı�
	swap02(&a, &b);
	cout << a << "\t" << b << endl;		//	��ַ�����β�����ʵ�Σ�ʵ�ν���
	swap03(a, b);
	cout << a << "\t" << b << endl;		//	�������β�Ҳ������ʵ�Σ�ʵ�ν���


	system("pause");
	return 0;
}
