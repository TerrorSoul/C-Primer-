#include <iostream>
#include <cstring>

using std::cin; using std::cout; using std::endl;

int main()
{
	const char ca1[] = "A string example";
	const char ca2[] = "A different string";
	char largestr[35];
	
	strcpy (largestr, ca1);
	strcat (largestr, " ");
	strcat (largestr, ca2);
	
	cout << "��һ���ַ�����Ϊ��" << ca1 << "���ڶ����ַ�����Ϊ��" << ca2 << "��" << endl << "ǰ�����������Ӻ���ַ�����Ϊ��" << largestr << "��" << endl;
	
	return 0;
}
