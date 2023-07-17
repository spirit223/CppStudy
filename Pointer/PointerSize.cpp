#include<iostream>
using namespace std;


int main() {

	int a = 10;
	int* p = &a;

	/*
	64位操作系统下为8字节, 32位操作系统下为4字节
	与总线寻址能力有关
	32位系统的最大寻址能力为 2 ^ 32
	64位系统的最大寻址能力为 2 ^ 64
	*/
	cout << "sizeof (int *) == " << sizeof p << endl;

	return 0;
}