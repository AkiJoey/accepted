/*求平均成绩*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n, m, a[50][5];
	double ave[50], sum[5];
	while (cin >> n >> m)
	{
		memset(ave, 0, sizeof(ave));
		memset(sum, 0, sizeof(sum));
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m;j++)
			{
				cin >> a[i][j];
				ave[i] += a[i][j];
				sum[j] += a[i][j];
			}
			ave[i] /= m;
		}
		int count = n;
		for (int i = 0;i < n;i++)
			for (int j = 0;j < m;j++)
				if (a[i][j] < sum[j] / n)
				{
					count--;
					break;
				}
		for (int i = 0;i < n - 1;i++)
			printf("%.2f ", ave[i]);
		printf("%.2f\n", ave[n - 1]);
		for (int i = 0;i < m - 1;i++)
			printf("%.2f ", sum[i] / n);
		printf("%.2f\n%d\n\n", sum[m - 1] /n, count);
	}
	return 0;
}