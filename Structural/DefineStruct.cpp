#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

/*
* ����һ���Զ�������: Student, ���ڱ�ʾѧ������
* Student���Ͱ��� (����, ����, ��������)
* �﷨:
* struct �������� {��Ա�б�};
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
* ����Student���ʹ��������ѧ��
* 1. struct Student s1
* 2. struct Student s2 = {...}
* 3. �ڴ����ṹ��ʱ˳�㴴���ṹ�����
*/
int main() {

	struct Student stu1;
	strcpy(stu1.name, "�⳩");
	stu1.age = 13;
	strcpy(stu1.language, "C++");

	cout << "stu1������Ϊ�� " << stu1.name << ", ����Ϊ�� " << stu1.age << "�� ѧϰ����������Ϊ�� " << stu1.language << endl;

	Teacher tea1 = { "С��", 23, "Java" };
	cout << "tea1������Ϊ�� " << tea1.name << ", ����Ϊ�� " << tea1.age << "�� ѧϰ����������Ϊ�� " << tea1.subject << endl;

	com.name = "����";
	com.size = 8;
	cout << "com��Ʒ��Ϊ: " << com.name << ", ��СΪ: " << com.size << "G." << endl;
	return 0;
}