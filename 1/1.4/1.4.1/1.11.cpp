#include <iostream>

int main()
{
	std::cout << "��������������";
	
	int i = 0, j = 0;
	
	std::cin >> i >> j;
	
	while (i >= j)
	{
		std::cout << i-- << " ";
	}
	
	return 0;
} 