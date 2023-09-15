#include<iostream>
using namespace std;
int main() {

	unsigned int in;
	cin >> in;
	int count = 0;
	while (in)
	{
		int temp = in & 1;
		count += temp;
		in = in >> 1;
	}
	cout << count;

	return 0;
}