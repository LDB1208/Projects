#include <iostream>
using namespace std;

/*
* ��������ʾ�����볣�����������͵Ĵ�С���������
*/

int main() {
	//�����볣��
	//�Ϸ���������������
	int _num = 3;
	int num = 4;
	int Num = 5;
	int n_m = 6;
	int n7m = 7;
	cout << _num << " " << num << " " << Num << " " << n_m << " " << n7m << endl;

	const int a = 0; //���ǳ������޷��޸�

	typedef int score; //typedef����������͵ı���
	score b = 10; //�������ͱ���

	cout << "====================" << endl;

	//�������͵Ĵ�С
	//sizeof()�����������͵��ֽ���
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	//�������
	int intmin = -2147483647 - 1; //���ޣ����ڱ����������⣬����ֱ��ʹ��-2147483648
	int intmax = 2147483647; //����
	//���
	int intMin = -2147483647 - 2; //����
	int intMax = 2147483648; //����
	cout << intMin << " " << intMax << endl;
}