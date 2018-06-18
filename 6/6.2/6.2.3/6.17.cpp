#include <iostream>
#include <iomanip>
#include <string> 

using std::cin; using std::cout; using std::endl;
using std::setw; using std::setfill;
using std::string;

bool isup(const string &s)
{
	auto ret = s.size();
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (isupper(s[i]))
		{
			return true;
		}
	}
	
	return false;
}

int main()
{
	string s;
	
	cout << "������string����";
	cin >> s;
	cout << endl << setfill('-') << setw(20) << "" << endl;
	cout << endl <<"��string����" << (isup(s) ? "����" : "û��") << "��д��ĸ" <<endl;
	
	return 0;
}
