/*多项式求和*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m, n;
	cin >> m;
	while (m--)
	{
		double sum = 1;
		cin >> n;
		for (int i = 2;i <= n;i++)
			if (i % 2)
				sum += 1.0 / i;
			else
				sum -= 1.0 / i;
		printf("%.2f\n", sum);
	}
	return 0;
}