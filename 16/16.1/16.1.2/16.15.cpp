#include <iostream>
#include "Screen.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
	Screen<5, 5> screen;
	cout << "�������ַ�����";
	cin >> screen;
	cout << "������ַ���Ϊ��";
	cout << screen << endl;
	system("pause");
	return 0;
}
