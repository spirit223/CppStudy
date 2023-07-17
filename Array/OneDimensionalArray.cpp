#include<iostream>
using namespace std;

int main() {

	int intArray[8] = { 10, 20, 30, 40, 50, 60 };
	// ±éÀúÊı×é
	for (int i = 0; i < 8; i++)
	{
		cout << intArray[i] << endl;
	}




	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	int arr2[5] = { 10, 20, 30, 40, 50 };
	cout << arr2 << endl;

	int arr3[5] = { 10, 20, 30 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << endl;
	}

	int arr4[] = { 1, 2, 3 };
	for (int i = 0; i < 3; i++)
	{
		cout << arr4[i] << endl;
	}

	

	return 0;
}