#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
using namespace std;
int main() {

	char st[100] = {'\0'};
	scanf("%s", st);
	size_t n = strlen(st);
	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0) 
		{
			char c = st[i - 1];
			if (c >= 'a')
			{
				st[i - 1] = c - 'a' + 'A';
			}
		}
	}
	printf("%s", st);

	return 0;
}