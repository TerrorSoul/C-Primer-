#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::istream_iterator;
using std::ostream_iterator;

int main()
{
	cout << "�����������У�";
	istream_iterator<int> in_iter(cin), eof;
	ostream_iterator<int> out_iter(cout, " ");
	vector<int> ivec;
	copy(in_iter, eof, back_inserter(ivec));
	sort(ivec.begin(), ivec.end());
	cout << "�����Ľ��Ϊ��";
	copy(ivec.begin(), ivec.end(), out_iter);
	return 0;
}
