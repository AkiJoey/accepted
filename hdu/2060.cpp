/*Snooker*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, c, a, b, s[] = {0, 7, 13, 18, 22, 25, 27};
	cin >> n;
	while (n--)
	{
		cin >> c >> a >> b;
		if (c > 6)
			puts((c - 6) * 8 + 27 + a >= b ? "Yes" : "No");
		else
			puts(s[c] + a >= b ? "Yes" : "No");
	}
	return 0;
}