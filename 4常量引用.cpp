#include <iostream>
using namespace std;
//						����������Ҫ���������βΣ���ֹ�����
//							�ں����β��б��У����Լ� const �������βΣ���ֹ�βθı�ʵ��

//ʾ��
void showValue(const int& v) {
	//v += 10;			//�ᱨ����Ϊ���� const ���Σ�v ��ֵ���ܸı�
	cout << "v: " << v << endl;
}

int main()
{
	//int& ref = 10;	//	������Ϊ������һ��ָ�볣������Ҫָ��һ���ڴ��ַ��ֱ��ָ�����ᱨ��
	
	//���� const �Ϳ�����,Ϊʲô��	
	const int& ref = 10;

	//���������Զ��������޸�Ϊ��int temp = 10; const int& ref = temp; �����temp������ԭ����ԭ��������

	//ref = 20;		//	������Ϊ�����������൱�� const int* const ref = 10; ref ��ָ���ַ �� ָ���ַ��ֵ ���ǲ����޸ĵġ�

	int a = 100;

	showValue(a);



	system("pause");
	return 0;
}