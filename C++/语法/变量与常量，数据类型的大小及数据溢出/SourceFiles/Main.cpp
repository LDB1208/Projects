#include <iostream>
using namespace std;

/*
* 本程序演示变量与常量，数据类型的大小及数据溢出
*/

int main() {
	//变量与常量
	//合法变量（或常量）名
	int _num = 3;
	int num = 4;
	int Num = 5;
	int n_m = 6;
	int n7m = 7;
	cout << _num << " " << num << " " << Num << " " << n_m << " " << n7m << endl;

	const int a = 0; //这是常量，无法修改

	typedef int score; //typedef定义变量类型的别名
	score b = 10; //这是整型变量

	cout << "====================" << endl;

	//数据类型的大小
	//sizeof()返回数据类型的字节数
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	//数据溢出
	int intmin = -2147483647 - 1; //下限（由于编译器的问题，不能直接使用-2147483648
	int intmax = 2147483647; //上限
	//溢出
	int intMin = -2147483647 - 2; //下溢
	int intMax = 2147483648; //上溢
	cout << intMin << " " << intMax << endl;
}