/*敌兵布阵*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int tree[50005];
int lowbit(int x)
{
	return x & -x;
}
void update(int p, int x, int n)
{
	for (;p <= n;p += lowbit(p))
		tree[p] += x;
}
int query(int p)
{
	int sum = 0;
	for (;p;p -= lowbit(p))
		sum += tree[p];
	return sum;
}
int rangeQuery(int l, int r)
{
	return query(r) - query(l - 1);
}
int main()
{
	int t, n, x, y, z;
	string s;
	cin >> t;
	for (int i = 1;i <= t;i++)
	{
		cin >> n;
		memset(tree, 0, sizeof(tree));
		for (int j = 1;j <= n;j++)
		{
			cin >> z;
			update(j, z, n);
		}
		cout << "Case " << i << ":" << endl;
		cin >> s;
		while (s[0] != 'E')
		{
			cin >> x >> y;
			if (s[0] == 'Q')
				cout << rangeQuery(x, y) << endl;
			else if (s[0] == 'A')
				update(x, y, n);
			else
				update(x, -y, n);
			cin >> s;
		}
	}
	return 0;
}