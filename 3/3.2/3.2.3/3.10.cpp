#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
	string s;
	
	cout << "��������Ҫ������ַ�����";
	cin >> s;
	
	for (auto c : s)
	{
		if (!ispunct(c))
		    cout << c;
	}
	
	return 0;
}
