#include <iostream>
using namespace std;

/*
* 本程序演示条件判断语句
*/

int main() {
	int a = 5; //声明变量
	if (a == 6) {
		//如果a=6,执行此行代码
		cout << "a = 6" << endl; //终端输出
	}
	else if (a < 4) {
		//如果a不等于6,且a<4,执行此行代码
		cout << "a < 4" << endl;
	}
	else {
		//如果a不等于6,且a>=4,执行此行代码
		cout << a << endl;
	}
	cin.get();
	return 0;
}