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
		// 平方不是7位数跳过
		if (square <= 1000000 || square > 9999999)
		{
			continue;
		}
		// 获取数字的字符串形式，转成字符数组后处理每一个字符
		string str = to_string(square);
		const char* c_str = str.c_str();
		// 将每一个字符转成int形式存入数组中
		for (int j = 0; j < str.length(); j++)
		{
			arr[j] = (int)(c_str[j] - '0');
		}
		// 将数组按顺序排列，排列后相邻两个数字相同就是重复
		sort(arr, arr + 7);	
		/*
		is_repeat 用来表示是否出现重复，
		默认为false表示不重复，
		然后遍历数组发现数字一样将is_repeat修改为true
		*/
		bool is_repeat = false;
		for (int k = 0; k < str.length() - 1; k++) {
			if (arr[k] == arr[k+1])
			{
				is_repeat = true;
			}
		}
		// 遍历完数组如果还是没有重复就输出该数字然后进入下一轮循环
		if (is_repeat == false)
		{
			cout << i << endl;
		}
	}

	return 0;
}