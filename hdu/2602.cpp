/*Bone Collector*/
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int t, n, c, w[1005], v[1005], dp[1005];
	cin >> t;
	while (t--)
	{
		memset(dp, 0, sizeof(dp));
		scanf("%d%d", &n, &c);
		for (int i = 1;i <= n;i++)
			scanf("%d", &v[i]);
		for (int i = 1;i <= n;i++)
			scanf("%d", &w[i]);
		for (int i = 1;i <= n;i++)
			for (int j = c;j >= w[i];j--)
				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		cout << dp[c] << endl;
	}
	return 0;
}