#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
	string s1, s2;
	
	cin >> s1 >> s2;
	
	if (s1 == s2)
	    cout << "�����ַ�����ȣ����ǣ�" << s1 << endl;
	else
	{
		string s;
		
		s = s1 > s2 ? s1 : s2;
		
		cout << "�����ַ�������ȣ��ϴ���ַ����ǣ�" << s << endl;
	}
	 
	return 0;
}
