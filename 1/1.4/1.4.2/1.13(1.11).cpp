#include <iostream>

int main()
{
	std::cout << "��������������";
	
	int i = 0, j = 0;
	
	std::cin >> i >> j;
	
	for (--i; i > j; --i)
	{
		std::cout << i << " ";
	}
	
	return 0;
} 
