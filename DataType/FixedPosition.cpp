#include<iostream>
#include<iomanip>
using namespace std;
int main() {

	double d1 = 1.5674897856;
	cout << d1 << endl;
	cout << setprecision(7) << d1 << endl;
	cout << fixed << setprecision(10) << d1 << endl;
	cout << fixed << setprecision(11) << d1 << endl;
	cout << fixed << setprecision(2) << d1 << endl;
	cout << fixed << setprecision(3) << d1 << endl;

	return 0;
}