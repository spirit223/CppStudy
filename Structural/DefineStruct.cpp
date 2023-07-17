#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

/*
* 创建一个自定义类型: Student, 用于表示学生类型
* Student类型包含 (姓名, 年龄, 语言种类)
* 语法:
* struct 类型名称 {成员列表};
*/
struct Student {
	char* name = new char[20];
	int age;
	char* language = new char[255];
};

struct Teacher {
	string name;
	int age;
	string subject;
};

struct Computer {
	string name;
	int size;
}com;

/*
* 创建Student类型创建具体的学生
* 1. struct Student s1
* 2. struct Student s2 = {...}
* 3. 在创建结构体时顺便创建结构体变量
*/
int main() {

	struct Student stu1;
	strcpy(stu1.name, "吴畅");
	stu1.age = 13;
	strcpy(stu1.language, "C++");

	cout << "stu1的姓名为： " << stu1.name << ", 年龄为： " << stu1.age << "， 学习的语言种类为： " << stu1.language << endl;

	Teacher tea1 = { "小吴", 23, "Java" };
	cout << "tea1的姓名为： " << tea1.name << ", 年龄为： " << tea1.age << "， 学习的语言种类为： " << tea1.subject << endl;

	com.name = "惠普";
	com.size = 8;
	cout << "com的品牌为: " << com.name << ", 大小为: " << com.size << "G." << endl;
	return 0;
}