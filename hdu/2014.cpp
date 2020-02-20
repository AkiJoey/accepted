/*青年歌手大奖赛_评委会打分*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, a;
	while (cin >> n)
	{
		int max = 0, min = 100, sum = 0;
		for (int i = 0;i < n;i++)
		{
			cin >> a;
			max = a > max ? a : max;
			min = a < min ? a : min;
			sum += a;
		}
		printf("%.2f\n", (float)(sum - max - min) / (n - 2));
	}
	return 0;
}