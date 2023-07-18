#include<iostream>
#include<cstring>
using namespace std;

bool subString(char str1[], char str2[]) {
	const char* result = strstr(str1, str2);
	if (result != NULL) {
		return true;
	}
	return false;
}

int main() {

	char str1[] = "abcdef";
	char str2[] = "bca";
	bool result = subString(str1, str2);
	cout << result << endl;
	return 0;
}