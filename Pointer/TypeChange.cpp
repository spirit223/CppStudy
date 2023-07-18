#include<iostream>
using namespace std;


int main() {

	int a = 98;

	cout << typeid((char)a).name() << endl;
	cout << (char)a << endl;

	return 0;
}