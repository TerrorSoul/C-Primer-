#include <algorithm>
#include <vector>
#include <iostream>

using std::count;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main() {
	vector<int> ivec;
	cout << "����int���У�";
	for (int i = 0, j; i < 10; i++) {
		cin >> j;
		ivec.push_back(j);
	}
	cout << "����Ҫͳ�Ƴ��ִ�����ֵ��";
	int i;
	cin >> i;
	cout << i << "�������г��ֵĴ���Ϊ��" << count(ivec.cbegin(), ivec.cend(), i) << endl;
	system("pause");
	return 0;
}