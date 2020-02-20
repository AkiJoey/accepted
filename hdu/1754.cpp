/*I Hate It*/
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int tree[4 * 200005];
void pushUp(int root)
{
	tree[root] = max(tree[root << 1], tree[root << 1 | 1]);
}
void init(int root, int l, int r)
{
	if (l == r)
	{
		scanf("%d", &tree[root]);
		return;
	}
	int m = (l + r) >> 1;
	init(root << 1, l, m);
	init(root << 1 | 1, m + 1, r);
	pushUp(root);
}
void update(int root, int l, int r, int p, int x)
{
	if (l == r)
	{
		tree[root] = x;
		return;
	}
	int m = (l + r) >> 1;
	if (p <= m)
		update(root << 1, l, m, p, x);
	else
		update(root << 1 | 1, m + 1, r, p, x);
	pushUp(root);
}
int rangeQuery(int root, int l, int r, int pl, int pr)
{
	if (pl <= l && r <= pr)
		return tree[root];
	int ans = 0, m = (l + r) >> 1;
	if (pl <= m)
		ans = max(rangeQuery(root << 1, l, m, pl, pr), ans);
	if (pr > m)
		ans = max(rangeQuery(root << 1 | 1, m + 1, r, pl, pr), ans);
	return ans;
}
int main()
{
	int n, m, a, b;
	char c[2];
	while (~scanf("%d%d", &n, &m))
	{
		init(1, 1, n);
		while (m--)
		{
			scanf("%s%d%d", c, &a, &b);
			if (c[0] == 'Q')
				printf("%d\n", rangeQuery(1, 1, n, a, b));
			else
				update(1, 1, n, a, b);
		}
	}
	return 0;
}