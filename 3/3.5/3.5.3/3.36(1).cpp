#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;

int main()
{
	int arr[10], arr1[10];
	
	cout << "������ʮ��������";
	
	for (int i, j; i < 10; ++i)
	{
		cin >> j;
		arr[i] = j;
	}
	
	cout << "��������ʮ��������";
	
	for (int i, j; i < 10; ++i)
	{
		cin >> j;
		arr1[i] = j;
	}
	
	cout << "ǰʮ������Ϊ��";
	
	for (auto i : arr)
	    cout << i << " ";
	cout << endl;
	
	cout << "��ʮ������Ϊ��";
	
	for (auto i : arr1)
	    cout << i << " ";
	cout << endl;
	
	bool a = true;
		
	for (int *i = begin(arr), *j = begin(arr1); i != end(arr) && j != end(arr1); ++i, ++j)
	{
		if (*i != *j)
		{
			a = false;
			cout << "�������鲻��ȡ�";
		    break;
		}
	}
	
    if (a)
        cout << "�����������";
	
	return 0;
}
