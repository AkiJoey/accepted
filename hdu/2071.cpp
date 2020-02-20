/*Max Num*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		double a, max = 0;
		cin >> n;
		while (n--)
		{
			cin >> a;
			max = a > max ? a : max;
		}
		printf("%.2f\n", max);
	}
	return 0;
}