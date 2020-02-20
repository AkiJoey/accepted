/*Prime Ring Problem*/
#include<iostream>
#include<cstring>
using namespace std;
int prime[] = { 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 };
int n, a[21];
bool vis[21];
void dfs(int index)
{
	if (index == n && prime[a[index - 1] + a[0]])
	{
		for (int i = 0;i < index - 1;i++)
			cout << a[i] << " ";
		cout << a[index - 1] << endl;
		return;
	}
	for (int i = 2;i <= n;i++)
		if (!vis[i] && prime[i + a[index - 1]])
		{
			vis[i] = true;
			a[index] = i;
			dfs(index + 1);
			vis[i] = false;
		}
}
int main()
{
	int i = 0;
	while (cin >> n)
	{
		a[0] = 1;
		memset(vis, false, sizeof(vis));
		cout << "Case " << ++i << ":" << endl;
		dfs(1);
		cout << endl;
	}
	return 0;
}