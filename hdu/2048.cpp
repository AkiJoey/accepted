/*神、上帝以及老天爷*/
#include<iostream>
using namespace std;
int main()
{
	int c, n;
	double sum[21] = {1, 1, 2}, a[21] = {0, 0, 1};
	for (int i = 3;i < 21;i++)
	{
		sum[i] = sum[i - 1] * i;
		a[i] = (a[i - 1] + a[i - 2]) * (i - 1);
	}
	cin >> c;
	while (c--)
	{
		cin >> n;
		printf("%.2lf%%\n", a[n] / sum[n] * 100);
	}
	return 0;
}