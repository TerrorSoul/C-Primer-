#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using std::end;

int main()
{
	int int_arr[10];
	
	cout << "������ʮ�����ڳ�ʼ�����������������";
	
	for (int i = 0, j; i < 10; ++i)
	{
		cin >> j;
		int_arr[i] = j;
	}
	
	cout << "��������Ϊ��";
	
	for (auto i : int_arr)
	    cout << i << " ";
	cout << endl;
	
	vector<int> ivec(begin (int_arr), end(int_arr));
	
	cout << "�����������ʼ����vector����Ϊ��";
	
	for (auto i : ivec)
	    cout << i << " ";
	
	return 0;
}
