#include <algorithm>
#include <list>
#include <string>
#include <iostream>

using std::count;
using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	list<string> sli;
	cout << "����string���У�";
	string j;
	for (int i = 0; i < 10; i++) {
		cin >> j;
		sli.push_back(j);
	}
	cout << "����Ҫͳ�Ƴ��ִ�����string��";
	string i;
	cin >> i;
	cout << i << "�������г��ֵĴ���Ϊ��" << count(sli.cbegin(), sli.cend(), i) << endl;
	system("pause");
	return 0;
}