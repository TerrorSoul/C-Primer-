#include <iostream>
#include <string>

using std::cin; using std::cout; using std::cerr; using std::endl;
using std::string;

int main()
{
	string word;
	
	if (cin >> word)
	{
		string word2;
		
		while (cin >> word2)
		{
			if(word == word2)
			{
				if (islower(word[0]))
				{
					continue;
				} 
				cout << word << endl;
				return 0;
			}
			else
			{
				word = word2;
			}
		}
		cout << "û���κε������ظ����ֵġ�";
		return 0;
	}
	else
	{
		cerr << "No data?!";
		return -1;
	}
}
