#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> svec(5, "10");
	int sum1 = 0;
	double sum2 = 0;
	for (const auto &i : svec)
	{
		sum1 += stoi(i);
		sum2 += stod(i);
	}
	cout << "int��Ϊ��" << sum1 << endl;
	cout << "double��Ϊ��" << sum2 << endl;
	
	return 0;
}
