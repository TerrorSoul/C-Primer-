#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> ivec;
	list<int> ili;
	cout << "����int���У�";
	int i;
	for (int n = 1; n <= 10; n++)
	{
		cin >> i;
		ivec.push_back(i);
	}
	sort(ivec.begin(), ivec.end());
	unique_copy(ivec.begin(), ivec.end(), back_inserter(ili));
	cout << "���Ϊ��";
	for_each(ili.cbegin(), ili.cend(), [](const int &j){cout << j << " ";});
	return 0;
} 
