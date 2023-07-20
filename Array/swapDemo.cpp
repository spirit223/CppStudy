#include<iostream>
using namespace std;

void swapTwoInt(int* left, int* right) {
	int temp = *left;
	*left = *right;
	*right = temp;
}

int main() {
	int a = 10, b = 20;
	swapTwoInt(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}