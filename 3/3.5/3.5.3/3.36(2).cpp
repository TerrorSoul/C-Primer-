#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::end;

int main()
{
	vector<int> v, v1;
	
	cout << "������ʮ��������";
	
	for (int i = 0, j; i < 10; ++i)
	{
		cin >> j;
		v.push_back(i);
	}
	    
	cout << "��������ʮ��������";
	
	for (int i = 0, j; i < 10; ++i)
	{
		cin >> j;
		v1.push_back(i);
	}
	
	cout << "ǰʮ������Ϊ��";
	
	for (auto i : v)
	    cout << i << " ";
	cout << endl;
	
	cout << "��ʮ������Ϊ��";
	
	for (auto i : v1)
	    cout << i << " ";
	cout << endl;
	    
	if (v == v1)
	    cout << "����vector�������";
	else
	    cout << "����vector�������";
		 
	return 0;
}
