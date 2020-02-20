/*A|B?*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a, b, t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		printf(a % b == 0 ? "YES\n" : "NO\n");
	}
	return 0;
}