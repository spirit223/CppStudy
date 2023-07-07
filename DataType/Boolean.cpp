#include<iostream>
using namespace std;

int main() {
	// 创建bool类型变量
	bool flag = true;
	cout << flag << endl;	// 1

	flag = false;
	cout << flag << endl;	// 0

	int num = 2;
	cout << (bool)num << endl;	// 1

	cout << sizeof flag << endl;	// 1

	return 0;
}