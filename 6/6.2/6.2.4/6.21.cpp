#include <iostream>

using std::cin; using std::cout; using std::endl;

int max(int i, const int *j)
{
	return i > *j ? i : *j;
}

int main()
{
	cout << "����������������";
	
	int i,j;
	
	cin >> i >> j;
	cout << "�����������нϴ��Ϊ��" << max(i, &j) << endl;
	
	return 0;
}
