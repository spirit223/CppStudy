#define _CRT_SECURE_NO_WARNINGS
/*
结构体数组:
	作用: 将自定义的结构体放入到数组中方便维护
	语法: struct 结构体名 数组名[个数] = { {}, {}, {} };
*/
#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	int age = 0;
	int score = 0;
};

int main() {
	struct Student stu[3] = {
		{"张三", 15, 50},
		{"李四", 20, 60},
		{"王五", 25, 70}
	};

	cout << stu[0].name << endl;

	return 0;
}