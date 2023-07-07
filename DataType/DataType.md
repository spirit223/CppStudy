# 整形

**作用：** 整形变量表示的是 `整数类型` 的数据

| 数据类型  | 占用空间                             | 取值范围           |
| --------- | ------------------------------------ | ------------------ |
| short     | 2                                    | (-2^15 ~ 2^15 - 1) |
| int       | 4                                    | (-2^31 ~ 2^31 - 1) |
| long      | windows为4,Linux32位为4,Linux64位为8 | (-2^31 ~ 2^31 - 1) |
| long long | 8                                    | (-2^63 ~ 2^63 - 1) |

# 实型

**作用：** 用于表示 `小数` 的数据

浮点型变量分为两种:

1. 单精度float
2. 双精度double (小数默认类型)

> 两者的区别在于表示的有效数字范围不同

| 数据类型 | 占用空间 | 有效数字范围    |
| -------- | -------- | --------------- |
| float    | 4        | 7位有效数字     |
| double   | 8        | 15-16位有效数字 |

> 使用cout默认输出的小数是显示6位有效数字

```c++
float f1 = 3.1415926f;	
double d1 = 3.1415926;

cout << "f1 = " << f1 << endl;		// 3.14159
cout << "d1 = " << d1 << endl;		// 3.14159

cout << "sizeof float = " << sizeof f1 << endl;		// 4
cout << "sizeof double = " << sizeof d1  << endl;	// 8

// 科学计算法
float f2 = 3e2;		// 3 * 10 ^ 2
cout << "f2 = " << f2 << endl;	// 300

float f3 = 3e-2;	// 3 * 0.1 ^ 2
cout << "f3 = " << f3 << endl;	// 0.03
```

# 字符型

**作用: ** 字符型变量用于显示单个字符

**语法:** char ch = 'a';

- C 和 C++ 中字符变量只占用1个字节
- 字符型变量并不是把字符本身放在内存中存储, 而是将对应的ASCII编码放入到存储单元

```c++
char ch = 'a';
cout << ch << endl;

cout << "char 字符型变量所占内存: " << sizeof(char) << endl;	// 1

/*字符型变量常见错误*/
//char ch2 = "b";   // 使用双引号创建字符型变量
//char ch3 = 'aasdb';	// 单引号中存储过多的字符

// 查看字符对应ASCII码
cout << (int)ch << endl;	//97
```

# 字符串型

**作用：**用于表示一串字符

### 两种风格

1. C风格字符串： `char 变量名[] = "字符串值"`

   > C风格字符串要用双引号括起来

   ```c++
   char str[] = "hello world!";
   cout << "hello world!" << endl;
   cout << str << endl;
   ```

2. C++风格字符串: `string 变量名 = "字符串值"`

   ```c++
   #include<iostream>
   // 注意这个头文件, 可以不包含, 但对于标准库建议手动包含
   #include<string>
   using namespace std;
   
   int main() {
   	// C++风格
   	string str2 = "hello world";
   	cout << str2 << endl;
   
   	return 0;
   }
   ```

# 布尔类型

**作用:** 布尔数据表示真或者假的值

bool类型只有两个值:

- true -- 真	(非0)
- false  -- 假	(0)

bool类型占 `1个字节` 大小

```C++
// 创建bool类型变量
bool flag = true;
cout << flag << endl;	// 1

flag = false;
cout << flag << endl;	// 0

int num = 2;
cout << (bool)num << endl;	// 1

cout << sizeof flag << endl;	// 1
```

# switch

**作用:** 执行多条件分支语句

```C++
switch(表达式) {
    case 结果1: 
        执行语句;
        break;
    case 结果1: 
        执行语句;
        break;
    case 结果1: 
        执行语句;
        break;
    default:
        执行语句;
}
```

```c++
cout << "请给电影进行打分: " << endl;
int score = 0;
cin >> score;
cout << "分数对应等级为: ";
switch (score)
{
    case 10:
        cout << "您认为是经典的电影!" << endl;
        break;
    case 9:
        cout << "您认为是高分的电影!" << endl;
        break;
    default:
        cout << "您未参与该电影的打分!" << endl;
        break;
}
```

> switch 只能判断整数、字符型或者枚举类型