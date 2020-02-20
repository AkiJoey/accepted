/*素数判定*/
#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if (!n || n == 1)
		return false;
	for (int i = 2;i * i <= n;i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	int x, y;
	while (cin >> x >> y && (x || y))
	{
		for (;x <= y;x++)
			if (!isPrime(x * x + x + 41))
				break;
		if (x > y)
			cout << "OK" << endl;
		else
			cout << "Sorry" << endl;
	}
	return 0;
}