#include<iostream>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int main() {
	Date date;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int result = 0;
	cout << "����һ������(��ʽ[2023 7 18]): ";
	cin >> date.year >> date.month >> date.day;
	for (int i = 0; i < date.month - 1; i++)
	{
		result += days[i];
	}
	result += date.day;
	if (date.month > 2)
	{
		if ((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
		{
			result++;
		}
	}
	cout << "�����Ǳ���ĵ�" << result << "��" << endl;


	return 0;
}