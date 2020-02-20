/*平方和与立方和*/
#include<iostream>
using namespace std;
int main()
{
	int m, n, x = 0, y = 0;
	while (cin >> m >> n)
	{
		if (m > n)
			m ^= n ^= m ^= n;
		for (;m <= n;m++)
			if (m % 2)
				x += m * m * m;
			else
				y += m * m;
		cout << y << ' ' << x << endl;
		x = 0;
		y = 0;
	}
	return 0;
}