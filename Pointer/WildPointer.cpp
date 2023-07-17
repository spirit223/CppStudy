#include<iostream>
using namespace std;

/*
* 空指针与野指针访问的都不是我们程序所申请的内存, 不归我们本程序所使用
*/
int main() {


	int* p = (int*)0x1100;

	// 访问野指针
	cout << *p << endl;

	return 0;
}