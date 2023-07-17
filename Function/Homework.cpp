#include<iostream>
using namespace std;

int Max(int num1, int num2);
bool Predicate(double double1, double double2);
void swapByValue(int left, int right);
void swapByAddress(int& left, int& right);
int randInt();
void task();
double Calculator(double left, char sign, double right);



int main() {

	int i, j;
	cout << "please input two numbers: " << endl;
	cin >> i >> j;
	int value = Max(i, j);
	cout << value << endl;

	return 0;
}

int Max(int a, int b) {
	cout << "in Max: ";
	return a > b ? a : b;
}

bool Predicate(double double1, double double2) {
	cout << "in Predicate: " << endl;
	return double1 > double2 ? true : false;
}

void swapByValue(int left, int right) {
	int temp = right;
	right = left;
	left = temp;
}

void swapByAddress(int& left, int& right) {
	int temp = right;
	right = left;
	left = temp;
}

void task() {
	cout << "hello world" << endl;
}

double Calculator(double left, char sign, double right) {
	if (sign == '/' && right == 0)
	{
		cout << "除数不能为0" << endl;
		return -1;
	}
	switch (sign)
	{
	case '+':
		return left + right;
		break;
	case '-':
		return left - right;
		break;
	case '*':
		return left * right;
		break;
	case '/':
		return left / right;
		break;
	default:
		cout << "输入符号有误！" << endl;
		return -1;
		break;
	}
}