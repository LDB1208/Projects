#include <iostream> //引入头文件
#include <stdlib.h>
#include <Windows.h>
using namespace std;

//定义函数
bool prime_result(int a) {
	if (a <= 1) { //a小于等于1则不为素数
		return false;
	}
	for (int i = 2; i < a; i++) { //从2到a-1循环枚举求余数
		if (a % i == 0) { //因为该范围不含1和a,所以余数为0则不为素数
			return false;
		}
	}
	return true; //以上条件不满足为素数
}

//主程序
int main() {
	//提示语
	cout << "This program is used for enumerating twin primes in an interval." << endl;
	Sleep(2000); //暂停2000毫秒(2秒)
	
	//接收输入
	int a = 0;
	cout << "Down to:";
	cin >> a;
	int b = 0;
	cout << "Up to:";
	cin >> b;

	//计算
	cout << "The twin primes in the interval:" << endl;
	for (int i = a; i <= b; i++) { //循环枚举
		for (int j = a; j <= b; j++) {
			if (prime_result(i) and prime_result(j) and j - i == 2) { //孪生素数的条件
				cout << i << " " << j << endl; //满足条件就输出
			}
		}
	}

	//结束语
	cout << "Done." << endl;
	system("pause"); //运行完毕时会提示“按任意键继续”
	return 0;
}