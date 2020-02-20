/*人见人爱A^B*/
#include<iostream>
using namespace std;
int quickPowMod(int x, int n, int m)
{
	int a = 1;
	x %= m;
	while (n)
	{
		if (n & 1)
			a = a * x % m;
		x = x * x % m;
		n >>= 1;
	}
	return a;
}
int main()
{
	int a, b;
	while (cin >> a >> b && (a || b))
		cout << quickPowMod(a, b, 1000) << endl;
	return 0;
}