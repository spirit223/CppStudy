#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char* str) {
	char* p = str;
	int length = strlen(str);
	for (int i = length; i > 0; i--) {
		cout << *(p + i - 1);
	}
}

int main() {

	char str[8] = "abcdefg";
	//char* str = "abcdefg";
	reverseString(str);
	return 0;
}