#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
	int i;
	vector<int> ivec;
	vector<int> ivec1;
	
	cout << "�������ĸ����ڳ�ʼ����һ��vector�����������";
	
	for (int a = 0; a < 4; ++a)
	{
		cin >> i;
		ivec.push_back(i);
	}
	
	cout << "�������߸����ڳ�ʼ���ڶ���vector�����������";
	
	for (int a = 0; a < 7; ++a)
	{
		cin >> i;
		ivec1.push_back(i);
	}
	
	if (ivec.size() == ivec1.size())
	{
		cout << "����vector����ȳ���";
		return -1;
	}
	else
	{
		if (ivec.size() < ivec1.size())
		{
			for (vector<int>::size_type a = 0; a != ivec.size(); ++a)
			{
				if (ivec[a] != ivec1[a])
				{
					cout << "flase" << endl;
					return 0;
				}
			}
			
			cout << "true" << endl;
			return 0;
		}
		else
		{
			for (vector<int>::size_type a = 0; a != ivec1.size(); ++a)
			{
				if (ivec1[a] != ivec[a])
				{
					cout << "flase" << endl;
					return 0;
				}
			}
			
			cout << "true" << endl;
			return 0;
		}
	}

}
