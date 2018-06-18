#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::placeholders::_1;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() < sz;
}

int main()
{
	string s = "string";
	vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8};
	const auto i = find_if(ivec.cbegin(), ivec.cend(), bind(check_size, s, _1));
	cout << "�� ";
	for_each(ivec.cbegin(), ivec.cend(), [](const int &i){cout << i << " ";});
	cout << "�������У���һ������\"string\"���ȵ�ֵΪ " << *i << endl;
	return 0;
}
