#include<iostream>
using namespace std;

void deleteTarget(int arr[], int target, int length) {

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == target)
		{
			for (int j = i+1; j < length; j++) {
				arr[i] = arr[j];
			}
		}
	}
	
}

int main() {

	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	int target = 3;

	deleteTarget(arr, target, sizeof(arr)/sizeof(int));
	
	for (int i = 0; i < sizeof(arr); i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}