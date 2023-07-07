#include<iostream>
#include<string>
using namespace std;


int main() {

	// 1. C风格
	char str[] = "hello world!";
	cout << "hello world!" << endl;
	cout << str << endl;

	// 2. C++风格
	string str2 = "hello world";
	cout << str2 << endl;

	return 0;
}