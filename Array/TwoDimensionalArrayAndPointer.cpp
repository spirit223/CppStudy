#include<iostream>
using namespace std;


int main() {

	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	cout << *arr << endl;
	cout << &arr[0][0] << endl;

	cout << *(*arr) << endl;
	cout << arr[0][0] << endl;

	cout << *(*arr + 1) << endl;
	cout << arr[0][1] << endl;

	cout << *(*(arr + 1)) << endl;
	cout << arr[1][0] << endl;

	return 0;
}