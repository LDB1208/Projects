#include <iostream>
using namespace std;

/*
* ��������ʾ���������
*/

int main() {
	//continue������
	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			//%��ȡ������,==�ж���������(�򲼶�ֵ)�Ƿ����
			cout << i << endl;
			continue; //�ص�ѭ����ͷ
		}
		cout << i << " ";
		cout << "Hello World!" << endl;
	}
	
	cout << "====================" << endl;

	//break������
	for (int i = 1; i < 5; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
			break; //����ѭ��
		}
		cout << i << " ";
		cout << "Hello World!" << endl;
	}

	cout << "====================" << endl;

	//return������
	for (int i = 0; i < 1; i++) {
		bool result = false;
		if (result) {
			return 0;
		}
		cout << "Hello World!" << endl;
	}
	return 0; //return��һ������ѭ����
	cin.get(); //��һ����Զ���ᱻִ��
}