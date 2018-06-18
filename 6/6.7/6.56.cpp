#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>
#include "Fpvec.h"
#include "6.55.cpp"

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::runtime_error; using std::range_error; using std::out_of_range;
using std::setw; using std::setfill;

int main()
{
	func();
	int a = 0, b = 0, i;
	
	cout << "������Ҫ���������������\na = ";
	cin >> a;
	cout << "b = ";
	while (cin >> b)
	{
		cout << "������Ҫִ�еĲ�����Ӧ�����֡��ӣ�1��������2�����ˣ�3��������4������";
		
		while (cin >> i)
		{
			try
			{
				if (i < 1 || i > 4)
				{
					throw out_of_range("����Ĳ��������ڣ�");
				}
				else if (i == 4 && b == 0)
				{
					throw range_error("��������Ϊ�㣡");
				}
				else
				{
					break;
				}
			} catch (out_of_range err)
			{
				cout << err.what() << "\n���ԣ����� y �� n" << endl;
				
				char c;
				
				cin >> c;
				
				if (!cin || c != 'y')
				{
					return -1;
				}
				else
				{
					cout << "������Ҫִ�еĲ�����Ӧ�����֡��ӣ�1��������2�����ˣ�3��������4������";
				}
			} catch (range_error err1)
			{
				cout << err1.what() << "\n������Ҫִ�еĲ�����Ӧ�����֡��������������1�����������������2����ֱ���˳�����3������";
				int j;
				
				while (cin >> j)
				{
					try
					{
						if (j < 1 || j > 3)
						{
							throw runtime_error("����Ĳ��������ڣ�");
						}
						else
						{
							break;
						}
					} catch (runtime_error err2)
					{
						cout << err2.what() << "\n���ԣ����� y �� n" << endl;
				
						char c;
						
						cin >> c;
						
						if (!cin || c != 'y')
						{
							return -1;
						}
					}
				}
				if (j == 1)
				{
					cout << "������Ҫִ�еĲ�����Ӧ�����֡��ӣ�1��������2�����ˣ�3��������4������";
					continue;
				}
				else if (j == 2)
				{
					cout << "b = ";
					while (cin >> b)
					{
						try
						{
							if (b == 0)
							{
								throw runtime_error("����ĳ�����Ϊ�㣡");
							}
							else
							{
								break;
							}
						} catch (runtime_error err3)
						{
							cout << err3.what() << "\n���ԣ����� y �� n" << endl;
					
							char c;
							
							cin >> c;
							
							if (!cin || c != 'y')
							{
								return -1;
							}
						}
					}
					break; 
				}
				else
				{
					return 1;
				}
			}
		}
	    break;
    }
	cout << setfill('-') << setw(20) << "" << endl;
	cout << "a ";
	
	switch (i)
	{
		case 1:
			cout << '+';
			break;
		case 2:
			cout << '-';
			break;
		case 3:
			cout << '*';
			break;
		case 4:
			cout << '/';
			break;
	}
	
	cout << " b =" << Fpvec[i - 1](a, b) << endl;
	
	return 0;
}
