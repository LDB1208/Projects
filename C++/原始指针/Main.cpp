#include <iostream>
using namespace std;

/*
* 本程序演示原始指针
*/

int main() {
	//指针是保存内存地址的十六进制的整数

	//空指针
	//我们无法在这些指针中读取或写入数据
	void* ptr1 = 0;
	void* ptr2 = NULL;
	void* ptr3 = nullptr;

	//指针的基本作用
	int var = 8;

	//两种形式
	int* Ptr1 = &var; //“&”读取变量var的内存地址
	double* Ptr2 = (double*)&var; //（double*）把var的内存地址转换成double类型
	cout << var << endl << Ptr1 << endl << Ptr2 << endl;
	//不要使用void，因为我无法访问void类型的指针

	cout << "====================" << endl;

	//逆向引用
	*Ptr1 = 10;
	cout << var << endl << Ptr1 << endl << Ptr2 << endl;

	cout << "====================" << endl;

	//分配内存
	char* buffer = new char[8]; //分配八个字节的内存
	memset(buffer, 0, 8);
	/*
	* memset函数用指定的数据填充一个内存块
	* 第一个参数是要填写的指针
	* 第二个参数是要填充的数据
	* 第三个参数是内存块的大小
	*/
	cout << buffer << endl;
	delete[] buffer; //删除buffer

	//双指针及多指针
	char** buffer2 = &buffer; //指针buffer的内存地址
	char*** buffer3 = &buffer2;
	cout << buffer2 << endl << buffer3 << endl;

	return 0;
}