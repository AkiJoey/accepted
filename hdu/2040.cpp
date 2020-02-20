/*亲和数*/
#include<iostream>
using namespace std;
int divisor(int x)
{
	if (!x || x == 1)
		return 0;
	int sum = 1;
	for (int i = 2;i <= x / 2;i++)
		if (x % i == 0)
			sum += i;
	return sum;
}
int main()
{
	int a, b, m;
	cin >> m;
	while (m--)
	{
		cin >> a >> b;
		if (divisor(a) == b && divisor(b) == a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}