#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
	string s1, s2;
	
	cin >> s1 >> s2;
	
	if (s1.size() == s2.size())
	    cout << "�����ַ����ȳ������ǣ�" << s1 << endl;
	else
	{
		string s;
		
		s = s1.size() > s2.size() ? s1 : s2;
		
		cout << "�����ַ������ȳ������Ƚϴ���ַ����ǣ�" << s << endl;
	}
	 
	return 0;
}
