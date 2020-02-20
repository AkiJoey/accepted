/*一只小蜜蜂...*/
#include<iostream>
using namespace std;
int main()
{
	int n, a, b;
	long long ans[48] = {1, 2};
	for (int i = 2;i < 48;i++)
		ans[i] = ans[i - 1] + ans[i - 2];
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		cout << ans[b - a - 1] << endl;
	}
	return 0;
}