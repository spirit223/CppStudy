#define _CRT_SECURE_NO_WARNINGS
/*
�ṹ������:
	����: ���Զ���Ľṹ����뵽�����з���ά��
	�﷨: struct �ṹ���� ������[����] = { {}, {}, {} };
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
		{"����", 15, 50},
		{"����", 20, 60},
		{"����", 25, 70}
	};

	cout << stu[0].name << endl;

	return 0;
}