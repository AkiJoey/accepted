/*Quoit Design*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
struct node
{
	double x, y;
}px[100005], py[100005];
bool cmpx(const node& a, const node& b)
{
	return a.x < b.x;
}
bool cmpy(const node& a, const node& b)
{
	return a.y < b.y;
}
double getDistance(node a, node b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
double closest(int s, int e)
{
	if (e - s == 1)
		return getDistance(px[s], px[e]);
	if (e - s == 2)
		return min(getDistance(px[s], px[s + 1]), min(getDistance(px[s + 1], px[e]), getDistance(px[s], px[e])));
	int count = 0, mid = (s + e) >> 1;
	double ans = min(closest(s, mid), closest(mid + 1, e));
	for (int i = s;i <= e;i++)
		if (px[i].x >= px[mid].x - ans && px[i].x <= px[mid].x + ans)
			py[count++] = px[i];
	sort(py, py + count, cmpy);
	for (int i = 0;i < count;i++)
		for (int j = i + 1;j < count;j++)
		{
			if (py[j].y - py[i].y >= ans)
				break;
			ans = min(ans, getDistance(py[i], py[j]));
		}
	return ans;
}
int main()
{
	int n;
	while (cin >> n && n)
	{
		for (int i = 0;i < n;i++)
			scanf("%lf%lf", &px[i].x, &px[i].y);
		sort(px, px + n, cmpx);
		printf("%.2f\n", closest(0, n - 1) / 2);
	}
	return 0;
}