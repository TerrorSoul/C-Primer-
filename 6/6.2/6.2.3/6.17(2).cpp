#include <iostream>
#include <iomanip>
#include <string> 

using std::cin; using std::cout; using std::endl;
using std::setw; using std::setfill;
using std::string;

string tolow(string &s)
{
	auto ret = s.size();
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		s[i] = tolower(s[i]);
	}
	
	return s;
}

int main()
{
	string s;
	
	cout << "������string����";
	cin >> s;
	cout << endl << setfill('-') << setw(20) << "" << endl;
	cout << endl << "�ı���string����Ϊ��" << tolow(s) <<endl;
	
	return 0;
}
