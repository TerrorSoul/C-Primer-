#include <iostream>

using std::cout;
using std::endl;

template<typename T, unsigned N> constexpr unsigned sizeOfArray(T(&arr)[N]) {
	return N;
}

int main() {
	int arr[10];
	cout << "�����СΪ��" << sizeOfArray(arr) << endl;
	system("pause");
	return 0;
}