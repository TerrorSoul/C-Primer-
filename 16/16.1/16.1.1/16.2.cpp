#include <iostream>
#include "compare.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	int i, j;
	cout << "��������Ҫ�Ƚϵ��������֣�";
	cin >> i >> j;
	cout << "�ȽϽ��Ϊ��" << compare(i, j) << endl;
	system("pause");
	return 0;
}