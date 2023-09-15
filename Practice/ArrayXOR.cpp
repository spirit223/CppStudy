#include<iostream>
using namespace std;

int arrayXOR(int n, int start) {
	int result = 0;
	int temp;
	for (int i = 0; i < n; i++) {
		temp = start + i * 2;
		result = result ^ temp;
	}

	return result;
}

int main() {

	int  n, start;
	cin >> n >> start;
	
	cout << arrayXOR(n, start);

	return 0;
}