/*Lowest Common Multiple Plus*/
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}
int main()
{
	int n, ans, a;
	while (cin >> n)
	{
		cin >> ans;
		while (--n)
		{
			cin >> a;
			ans = lcm(ans, a);
		}
		cout << ans << endl;
	}
	return 0;
}