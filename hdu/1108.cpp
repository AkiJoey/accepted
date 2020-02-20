/*最小公倍数*/
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if (a < b)
		a ^= b ^= a ^= b;
	if (!b)
		return a;
	return gcd(b, a % b);
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int a, b;
	while (cin >> a >> b)
		cout << lcm(a, b) << endl;
	return 0;
}