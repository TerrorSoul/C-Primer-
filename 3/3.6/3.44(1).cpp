#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int cnt;

    using int_array = int[4];
	
	cout << "������ʮ�������ڳ�ʼ����ά�����������";
	
	for (int_array &row : ia)
	    for (int &col : row)
	    {
	    	cin >> cnt;
	    	col = cnt;
		}
				
	cout << "��ά����Ϊ��";
	
	for (int_array &row : ia)
	{
		for (int col : row)
	    	cout << col << " ";
	    cout << endl;
	}
	
	return 0;
}
