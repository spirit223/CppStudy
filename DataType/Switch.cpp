#include<iostream>
using namespace std;

int main() {
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

	return 0;
}