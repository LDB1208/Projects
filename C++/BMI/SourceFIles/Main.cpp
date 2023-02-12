#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int main() {
	//提示语
	cout << "This program is used for calculating BMI" << endl;
	Sleep(2000);

	//接受输入
	float w = 0.0f;
	float h = 0.0f;
	cout << "Your weight(kg):";
	cin >> w;
	cout << "Your height(m):";
	cin >> h;

	//计算
	float BMI = w / pow(h, 2); //pow(a, b)运算a的b次方
	cout << "Your BMI is:" << BMI << endl;
	if (18.5f <= BMI <= 23.9f) {
		cout << "Healthy" << endl;
	}
	else if (BMI < 18.5f) {
		cout << "Too thin" << endl;
	}
	else {
		cout << "Too fat" << endl;
	}

	//结束语
	cout << "Done" << endl;
	system("pause");
	return 0;
}