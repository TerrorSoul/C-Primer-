#include <iostream>

using std::cin; using std::cout;

int main()
{
	cout << "��������������";
	
	int i = 0, j = 0;
	
	cin >> i >> j;
	
	while (i >= j)
	{
		cout << i-- << " ";
	}
	
	return 0;
} 
