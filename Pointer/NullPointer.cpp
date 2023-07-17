#include<iostream>
using namespace std;

int main() {

	// 空指针, 定义指针不知道指向哪里时的初始化
	int* p = NULL;

	/*
	编译阶段不会报错, 运行时程序会崩溃
	0 ~ 255 的内存空间为操作系统所使用, 不可以进行访问也不可以进行操作
	*/
	*p = 100;

	// 即使是输出也不行, 涉及了对0~255 内存段的解引用
	cout << *p << endl;

	return 0;
}