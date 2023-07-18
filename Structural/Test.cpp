#include<iostream>
#include<cstring>
using namespace std;
/*
I: input
O: output
Stream: 流
*/

struct Student {
	string name;
	int age;
};

// 函数的声明
void swap(int* a, int* b);
// 实现
void swap(int* a, int* b){
	// 解引用
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapWithoutPointer(int a, int b) {
	// 解引用
	int temp = a;
	a = b;
	b = temp;
	cout << "in swap: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
}


/*
* 1. 返回值类型
* 2. 函数名
* 3. 参数列表
* 4. 函数体
*/
int main() {

	int a = 10, b = 20;
	swap(a, b);
	cout << "in main: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	/*
	* 字符型
	* char			1
	* 整形
	* short			2
	* int			4
	* long			4
	* long long		8
	* 实型
	* float			4
	* double		8
	* 布尔  bool
	* true			1
	* false			1
	* 指针    void*   万能指针
	* *				8
	* *				4
	* 结构体
	*
	* 类
	*/


	/*
	* 1. 定义了一个原型作用域的整形变量i
	* 2. 判断条件是否成立，成立则执行
	* 3. 执行代码体
	* 4. 步长
	*/
	for (int i = 0; i < 9; i++)
	{
		cout << i++ << endl;
	}



	return 0;
}