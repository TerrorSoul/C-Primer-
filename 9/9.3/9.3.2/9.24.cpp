#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;
	cout << "��ѡ����ȡvector�еĵ�һ��Ԫ�صķ�ʽ[at(1)���±������(2)��front(3)��begin(4)]:";
	int i = 0;
	cin >> i;
	switch (i)
	{
		case 1:
			cout << ivec.at(0);
			break;
		case 2:
			cout << ivec[0];
			break;
		case 3:
			cout << *ivec.begin();
			break;
		case 4:
			cout << ivec.front();
			break;
		default:
			cout << "��ѡ��Ĳ��������ڣ�";
	}
	return 0;
}
