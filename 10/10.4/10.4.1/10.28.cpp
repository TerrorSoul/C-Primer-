#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;
 
int main()
{
	vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> ili1, ili2, ili3;
	copy(ivec.begin(), ivec.end(), inserter(ili1, ili1.begin()));
	copy(ivec.begin(), ivec.end(), back_inserter(ili2));
	copy(ivec.begin(), ivec.end(), front_inserter(ili3));
	cout << "vector:";
	for_each(ivec.cbegin(), ivec.cend(), [](const int & i){cout << i << " ";});
	cout << endl << "ʹ��inserter������";
	for_each(ili1.cbegin(), ili1.cend(), [](const int & i){cout << i << " ";});
	cout << endl << "ʹ��back_inserter������";
	for_each(ili2.cbegin(), ili2.cend(), [](const int & i){cout << i << " ";});
	cout << endl << "ʹ��front_inserter������";
	for_each(ili3.cbegin(), ili3.cend(), [](const int & i){cout << i << " ";});
	cout << endl;
	return 0;
}
