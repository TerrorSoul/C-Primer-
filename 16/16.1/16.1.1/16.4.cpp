#include <vector>
#include <list>
#include <iostream>

using std::vector;
using std::list;
using std::cin;
using std::cout;
using std::endl;

template <typename T, typename U> T my_find(T begin, T end, const U &val) {
	for(; begin != end; ++begin) {
		if (*begin == val) {
			return begin;
		}
	}
	return end;
}

int main() {
	vector<int> ivec{1, 2, 3, 4, 5};
	list<int> ili{1, 2, 3, 4, 5};
	int i;
	cout << "��������Ҫ���ҵ����֣�";
	cin >> i;
	auto it1 = my_find(ivec.cbegin(), ivec.cend(), i);
	cout << "��vector�еĲ��ҽ��Ϊ��" << (it1 != ivec.cend() ? *it1 : 0) << endl;
	auto it2 = my_find(ili.cbegin(), ili.cend(), i);
	cout << "��list�еĲ��ҽ��Ϊ��" << (it2 != ili.cend() ? *it2 : 0) << endl;
	system("pause");
	return 0;
}