#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
using namespace std;

int main() {

	int arr[7];
	int left, right;
	cin >> left >> right;
	for (int i = left; i <= right; i++)
	{
		int square = pow(i, 2);
		// ƽ������7λ������
		if (square <= 1000000 || square > 9999999)
		{
			continue;
		}
		// ��ȡ���ֵ��ַ�����ʽ��ת���ַ��������ÿһ���ַ�
		string str = to_string(square);
		const char* c_str = str.c_str();
		// ��ÿһ���ַ�ת��int��ʽ����������
		for (int j = 0; j < str.length(); j++)
		{
			arr[j] = (int)(c_str[j] - '0');
		}
		// �����鰴˳�����У����к���������������ͬ�����ظ�
		sort(arr, arr + 7);	
		/*
		is_repeat ������ʾ�Ƿ�����ظ���
		Ĭ��Ϊfalse��ʾ���ظ���
		Ȼ��������鷢������һ����is_repeat�޸�Ϊtrue
		*/
		bool is_repeat = false;
		for (int k = 0; k < str.length() - 1; k++) {
			if (arr[k] == arr[k+1])
			{
				is_repeat = true;
			}
		}
		// �����������������û���ظ������������Ȼ�������һ��ѭ��
		if (is_repeat == false)
		{
			cout << i << endl;
		}
	}

	return 0;
}