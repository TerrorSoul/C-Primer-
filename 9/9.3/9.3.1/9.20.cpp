#include <iostream>
#include <list>
#include <deque>

using std::cin; using std::cout; using std::endl;
using std::list;
using std::deque;

int main()
{
	cout << "���������ڳ�ʼ��list<int>�����������";
	int i;
	list<int> ili;
	while (cin >> i)
	{
		ili.push_back(i);
	}
	deque<int> ideq1, ideq2;
	for (const auto &i : ili)
	{
		i % 2 == 0 ? ideq1.push_back(i) : ideq2.push_back(i);
	}
	cout << "ֵΪż��������Ϊ��";
	for (const auto &i : ideq1)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "ֵΪ����������Ϊ��";
	for (const auto &i : ideq2)
	{
		cout << i << " ";
	 } 
	return 0;
}
