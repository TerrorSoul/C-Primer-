#include <iostream>
#include <vector>

using std::vector;
using std::cin; using std::cout; using std::endl;

int main()
{
	int i;
	vector<int> v;
	
	cout << "������һ��������";
	
	while(cin >> i)
	    v.push_back(i);

	for (vector<int>::size_type j = 0, k = v.size(); j <= k; ++j, --k)
	{		
		cout << (j != k ? v[j] + v[k] : v[j]) << " ";
	}
	
	return 0;
}
