#include <iostream>
#include <stdexcept>

using std::cin; using std::cout; using std::endl;
using std::runtime_error;

int main()
{
	cout << "����������������";
	
	int i,j;
	
	cin >> i >> j;
	
	if (j == 0)
	{
		throw runtime_error("�ڶ�������0��");
	}
	cout << i << "����" << j << "�Ľ��Ϊ��" << i / j << endl;
	
	return 0;
}
