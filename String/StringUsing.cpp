#include<iostream>
#include<string>
//using namespace std;


int main() {
	std::string str = "Hello, I am spirit!";

	std::cout << "str is " << str << std::endl;
	std::cout << "str.size() is " << str.size() << std::endl;
	std::cout << "str.length() is " << str.length() << std::endl;
	std::cout << "str.max_size() is " << str.max_size() << std::endl;
	std::cout << "str.capacity() is " << str.capacity() << std::endl;
	std::cout << "str.at(2) is " << str.at(2) << std::endl;
	std::cout << "str.front() is " << str.front() << std::endl;
	std::cout << "str.back() is " << str.back() << std::endl;
	std::cout << "str.c_str() is " << str.c_str() << std::endl;
	std::cout << "str.data() is " << str.data() << std::endl;

	std::cout << "sizeof str " << sizeof str << std::endl;
	std::cout << "sizeof(std::string) " << sizeof(std::string) << std::endl;

	return 0;
}