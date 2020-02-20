/*A1 = ?*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double a, b, c[3005];
	while (cin >> n)
	{
		cin >> a >> b;
		for (int i = 0;i < n;i++)
			cin >> c[i];
		double sum = 0;
		for (int i = 0;i < n;i++)
			sum += (n - i) * c[i];
		printf("%.2f\n", (n * a + b - sum * 2) / (n + 1));
	}
	return 0;
}