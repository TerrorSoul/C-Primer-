#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;
	int i;
	
	cout << "���������ڳ�ʼ��vector<int>��������";
	
	while (cin >> i)
	    ivec.push_back(i);
	    
	cout << "vector<int>Ϊ��";
	
	for (auto i : ivec)
	    cout << i << " ";
	cout << endl;
	
	cout << "����ֵ�������vector<int>Ϊ��";
	
	for (auto i : ivec)
	    cout << (i % 2 == 0 ? i : 2 * i) << " ";
	cout << endl;
	
	return 0;
}
