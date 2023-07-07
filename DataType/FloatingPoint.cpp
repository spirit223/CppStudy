#include<iostream>
using namespace std;

int main() {

	float f1 = 3.1415926f;	
	double d1 = 3.1415926;

	cout << "f1 = " << f1 << endl;		// 3.14159
	cout << "d1 = " << d1 << endl;		// 3.14159

	cout << "sizeof float = " << sizeof f1 << endl;		// 4
	cout << "sizeof double = " << sizeof d1  << endl;	// 8

	// 科学计算法
	float f2 = 3e2;		// 3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;	// 300

	float f3 = 3e-2;	// 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;	// 0.03
	return 0;
}