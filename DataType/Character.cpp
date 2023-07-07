#include<iostream>
using namespace std;

int main() {

	char ch = 'a';
	cout << ch << endl;

	cout << "char 字符型变量所占内存: " << sizeof(char) << endl;	// 1

	/*字符型变量常见错误*/
	//char ch2 = "b";   // 使用双引号创建字符型变量
	//char ch3 = 'aasdb';	// 单引号中存储过多的字符

	// 查看字符对应ASCII码
	cout << (int)ch << endl;	//97

	return 0;
}