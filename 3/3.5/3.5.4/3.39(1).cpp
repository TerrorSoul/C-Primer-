#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
	string s1 = "A string example";
	string s2 = "A different string";
	
	cout << (s1 == s2 ? "����string������ȣ���Ϊ��" + s1 + "��": s1 > s2 ? "����string������ȣ�С��Ϊ��" + s2 + "�����Ϊ��" + s1 + "��": "����string������ȣ�С��Ϊ��" + s1 + "�����Ϊ��" + s2 + "��") << endl;
	 
	return 0;
}
