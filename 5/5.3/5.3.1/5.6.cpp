#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
	int grade;
	
	cout << "������ɼ���";
	
	cin >> grade;
	
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	
	string lettergrade;
	
	lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
	lettergrade += grade == 100 ? ' ' : grade % 10 > 7 ? '+' : grade % 10 < 3 ? '-' : ' ';
		
	cout << "�ɼ�Ϊ��" << lettergrade << endl;
	
	return 0;
}
