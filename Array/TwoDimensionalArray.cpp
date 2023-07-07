#include<iostream>
using namespace std;

int main() {

	/* type 1 */
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	cout << "sizeof arr = " <<sizeof arr << endl;
	cout << "sizeof arr / sizeof arr[0][0] = " << sizeof arr / sizeof arr[0][0] << endl;
	int* p = arr[0];
	for (int i = 0; i < sizeof arr / sizeof arr[0][0]; i++)
	{
		cout << *(p + i) << endl;
	}

	/* type 2 */
	int arr1[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	/* type 3 */
	int arr2[2][3] = { 1, 2, 3, 4, 5, 6 };

	/* type 4 */
	int arr3[][3] = { 1, 2, 3, 4, 5, 6 };

	cout << "done" << endl;

	cout << "��ά����ռ���ڴ�ռ�Ϊ: " << sizeof arr << endl;				// 24
	cout << "��ά�����һ��ռ���ڴ�Ϊ: " << sizeof arr[0] << endl;			// 12
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ: " << sizeof arr[0][0] << endl;	// 4

	cout << "���������Ϊ: " << sizeof arr / sizeof arr[0] << endl;			// 2
	cout << "���������Ϊ: " << sizeof arr[0] / sizeof arr[0][0] << endl;	// 3 

	return 0;
}