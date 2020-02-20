/*求数列的和*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int m;
	double n;
	while (cin >> n >> m)
	{
		double sum = n;
		while (--m)
		{
			n = sqrt(n);
			sum += n;
		}
		printf("%.2f\n", sum);
	}
	return 0;
}