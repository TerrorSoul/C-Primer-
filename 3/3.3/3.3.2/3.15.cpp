#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout; using std::cin; using std::endl;

int main()
{
	cout << "������һ���ַ�����";
	
	string word;
	vector<string> text;
	
	while (cin >> word)
	    text.push_back(word);
		
	return 0;
}
