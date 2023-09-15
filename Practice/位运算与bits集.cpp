#include<iostream>

#define Java 		0x0     // 0000 0000
#define CPP  		0x1     // 0000 0001
#define JavaScript 	0x2     // 0000 0010
#define Python 		0x4     // 0000 0100
#define GoLang      0x8     // 0000 1000
#define ErLang      0x10    // 0001 0000
#define HTML      	0x20    // 0010 0000
#define CSS      	0x40    // 0100 0000
#define Vue         0x80    // 1000 0000

int main() {
	/*
	8门课至少用8个bit来存储，
	C++中char类型占用1个字节，8个比特位，
	但是需要注意无符号
	*/
	// 最开始未选择语言（初始化）
	unsigned char language = 0;
	// 选择JavaScript（添加）
	// language = language | JavaScript;
	language |= JavaScript;		// language == 0000 0010
	language |= Vue;			// language == 1000 0010
	// 查看有没有选择CPP（查找）
	if((language & CPP) == 0) {	
		cout << "没有选择CPP" << endl;
	}
	else {
		cout << "选择了CPP" << endl;
	}
	// 取消选择JavaScript(删)
	language &= ~JavaScript;

	return 0;
}
