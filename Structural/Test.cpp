#include<iostream>
#include<cstring>
using namespace std;
/*
I: input
O: output
Stream: ��
*/

struct Student {
	string name;
	int age;
};

// ����������
void swap(int* a, int* b);
// ʵ��
void swap(int* a, int* b){
	// ������
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapWithoutPointer(int a, int b) {
	// ������
	int temp = a;
	a = b;
	b = temp;
	cout << "in swap: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
}


/*
* 1. ����ֵ����
* 2. ������
* 3. �����б�
* 4. ������
*/
int main() {

	int a = 10, b = 20;
	swap(a, b);
	cout << "in main: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	/*
	* �ַ���
	* char			1
	* ����
	* short			2
	* int			4
	* long			4
	* long long		8
	* ʵ��
	* float			4
	* double		8
	* ����  bool
	* true			1
	* false			1
	* ָ��    void*   ����ָ��
	* *				8
	* *				4
	* �ṹ��
	*
	* ��
	*/


	/*
	* 1. ������һ��ԭ������������α���i
	* 2. �ж������Ƿ������������ִ��
	* 3. ִ�д�����
	* 4. ����
	*/
	for (int i = 0; i < 9; i++)
	{
		cout << i++ << endl;
	}



	return 0;
}