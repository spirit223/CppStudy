#include<iostream>
using namespace std;

int main() {

	char ch = 'a';
	cout << ch << endl;

	cout << "char �ַ��ͱ�����ռ�ڴ�: " << sizeof(char) << endl;	// 1

	/*�ַ��ͱ�����������*/
	//char ch2 = "b";   // ʹ��˫���Ŵ����ַ��ͱ���
	//char ch3 = 'aasdb';	// �������д洢������ַ�

	// �鿴�ַ���ӦASCII��
	cout << (int)ch << endl;	//97

	return 0;
}