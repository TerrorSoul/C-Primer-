#include <iostream>

using std::cin; using std::cout; using std::endl;

int factmain(int val)
{
	int ret = 1;
	
	while (val > 1)
	{
		ret *= val--;
	}
	
	return ret;
}

int main()
{
	cout << "������һ��������";
	
	int i;
	
	cin >> i;
	cout << i << "! is " << factmain(i) << endl;
	
	return 0;
}
