#include <iostream>
#include <cstddef>

using std::cin; using std::cout; using std::endl;

int main()
{
	int ia[3][4];
	int cnt;
	
	cout << "������ʮ�������ڳ�ʼ����ά�����������";
	
	for (size_t row = 0; row != 3; ++row)
	    for (size_t col = 0; col != 4; ++col)
	    {
	    	cin >> cnt;
	    	ia[row][col] = cnt;
		}
				
	cout << "��ά����Ϊ��";
	
	for (size_t row = 0; row != 3; ++row)
	{
		for (size_t col = 0; col != 4; ++col)
	    	cout << ia[row][col] << " ";
	    cout << endl;
	}
	
	return 0;
}
