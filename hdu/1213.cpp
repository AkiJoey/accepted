/*How Many Tables*/
#include<iostream>
using namespace std;
int parent[1005];
void Init(int n)
{
	for (int i = 0;i <= n;i++)
		parent[i] = i;
}
int Find(int v)
{
	return parent[v] = parent[v] == v ? v : Find(parent[v]);
}
void Merge(int x, int y)
{
	int a = Find(x), b = Find(y);
	if (a != b)
		parent[a] = b;
}
int main()
{
	int t, n, m, x, y;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		int sum = 0;
		Init(n);
		while (m--)
		{
			cin >> x >> y;
			Merge(x, y);
		}
		for (int i = 1;i <= n;i++)
			if (parent[i] == i)
				sum++;
		cout << sum << endl;
	}
	return 0;
}