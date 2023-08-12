#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {

	// 20λ 
	double precision = 3.1415926535897932384;

	// setprecision 
	cout << precision << endl;
	cout << setprecision(6) << precision << endl;
	cout << setprecision(7) << precision << endl;

	int number = 10;
	cout << number / 3 << endl;

	cout << ceil(number / 3.0) << endl;
	cout << floor(number / 3.0) << endl;

	cout << "number / 3 = " << number / 3 << endl;
	cout << "number / 3.0 = " << number / 3.0 << endl;

	cout << "(int)3.33333 = " << (int)3.33333 << endl;

	cout << "(char)98 = " << (char)98 << endl;

	cout << "number + 1.1 = " << number + 1.1 << endl;

	cout << number / 1.0 << endl;
	cout << (double)number << endl;

	cout << typeid(number / 1.0).name() << endl;

	return 0;
}