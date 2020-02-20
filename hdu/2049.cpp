/*不容易系列之(4)——考新郎*/
#include<iostream>
using namespace std;
int main()
{
	int c, n, m;
	long long sum[21] = {1, 1, 2}, a[21] = {0, 0, 1};
	for (int i = 3;i < 21;i++)
	{
		sum[i] = sum[i - 1] * i;
		a[i] = (a[i - 1] + a[i - 2]) * (i - 1);
	}
	cin >> c;
	while (c--)
	{
		cin >> n >> m;
		printf("%lld\n", sum[n] / sum[m] / sum[n - m] * a[m]);
	}
	return 0;
}