#include<iostream>
using namespace std;


int main() {

	int a = 10;
	int* p = &a;

	/*
	64λ����ϵͳ��Ϊ8�ֽ�, 32λ����ϵͳ��Ϊ4�ֽ�
	������Ѱַ�����й�
	32λϵͳ�����Ѱַ����Ϊ 2 ^ 32
	64λϵͳ�����Ѱַ����Ϊ 2 ^ 64
	*/
	cout << "sizeof (int *) == " << sizeof p << endl;

	return 0;
}