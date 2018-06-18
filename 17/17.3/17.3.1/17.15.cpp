#include <string>
#include <regex>
#include <iostream>

using std::string;
using std::regex;
using std::smatch;
using std::regex_search;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern);
	smatch results;
	string text_str;
	while (cout << "������һ�����ʣ�" && getline(cin, text_str))
	{
		if (regex_search(text_str, results, r)) {
			cout << results.str() << endl;
		}
		else
		{
			cout << "�˵���δΥ������" << endl;
		}
	}
	system("pause");
	return 0;
}