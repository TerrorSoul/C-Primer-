#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int cnt;
	
	cout << "������ʮ�������ڳ�ʼ����ά�����������";
	
	for (auto &row : ia)
	    for (auto &col : row)
	    {
	    	cin >> cnt;
	    	col = cnt;
		}
				
	cout << "��ά����Ϊ��";
	
	for (const auto &row : ia)
	{
		for (auto col : row)
	    	cout << col << " ";
	    cout << endl;
	}
	
	return 0;
}
