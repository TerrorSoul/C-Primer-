#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

void fun(vector<int> ivec, int j = 1)
{
	#ifndef NDEBUG
	    cout << "vector����Ĵ�СΪ��" << ivec.size() << "����";
	#endif
	 
	if (j < 10)
	{
		cout << ivec[j - 1] << " ";
		++j;
		fun(ivec, j);
	}
	else
	{
		cout << ivec[j - 1] << endl;
	}
	
}

int main()
{
	cout << "������ʮ�����ڳ�ʼ��vector�����������";
	
	vector<int> ivec;
	
	for (int i = 0; i < 10; ++i)
	{
		int j;
		cin >> j;
		ivec.push_back(j);
	}
	
	cout << "vector���������Ϊ��" << endl;
	
	fun(ivec);
	
	return 0;
}
