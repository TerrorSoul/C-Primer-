#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

void fun(vector<int> ivec, int j)
{	
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
	cout << "���������ڳ�ʼ��vector�����������";
	
	vector<int> ivec;
	
	for (int i = 0; i < 10; ++i)
	{
		int j;
		cin >> j;
		ivec.push_back(j);
	}
	
	cout << "vector�����ʼ����ɣ���������һ��1~10֮���������";
	int j;
	cin >> j;
	cout << "vector�����е�" << j <<"��Ԫ�ص����һ��Ԫ��Ϊ��";
	
	fun(ivec, j);
	
	return 0;
}
