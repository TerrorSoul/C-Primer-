#include <string>
#include <vector>
#include <iostream>
#include <utility>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::pair;

int main()
{
	cout << "����string��int�����У�";
	string word;
	int i;
	vector<pair<string, int>> pvec;
	while(cin >> word && cin >> i)
	{
		pvec.push_back(make_pair(word, i));
	}
	cout << "���������Ϊ��";
	for(const auto &w : pvec)
	{
		cout << w.first << " " << w.second << endl;
	}
	return 0;
}
