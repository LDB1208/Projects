#include <iostream>
using namespace std;

/*
* ��������ʾѭ��
*/

int main() {
	for (int i = 0; i < 5; i++) {
		/*
		* int i = 0 ��������
		* i < 5 ѭ������
		* i++ i�Լ�1
		* ����������;����
		*/
		cout << "Hello World!" << endl; //���5��"Hello World!"
	}

	cout << "====================" << endl;

	int i = 0; //��������
	while (i < 5) {
		//i < 5 ѭ������
		cout << "Hello World!" << endl;
		i++;
	}

	cout << "====================" << endl;

	bool result = false;
	do {
		cout << "Hello World!" << endl;
	} while (result);
	//�������ѭ���ܻᱻִ��һ��
	return 0;
}