#include<iostream>
using namespace std;

int main() {

	float f2 = 3.1415926535;
	cout << typeid(3.1415926535).name() << endl;
	cout << typeid(f2).name() << endl;

	long long ll = 5;
	int i = 5;
	cout << typeid(ll * i).name() << endl;

	return 0;
}