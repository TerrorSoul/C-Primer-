#include <iostream>
#include <cstring>

using std::cin; using std::cout; using std::endl;

int main()
{
	const char ca1[] = "A string example";
	const char ca2[] = "A different string";
	
	if (!strcmp(ca1, ca2))
	    cout << "����string������ȣ���Ϊ��" << ca1 << "��" << endl;
	else
	{
		if (strcmp(ca1, ca2) > 0)
		    cout << "����string������ȣ�С��Ϊ��" << ca2 << "�����Ϊ��" << ca1 << "��" << endl;
		else
		    cout << "����string������ȣ�С��Ϊ��" << ca1 << "�����Ϊ��" << ca2 << "��" << endl;
	}
	 
	return 0;
}
