/*Tempter of the Bone*/
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
char map[10][10];
bool vis[10][10];
bool flag;
int n, m, t, startx, starty, endx, endy, wall;
void dfs(int x, int y, int time)
{
	if (x < 1 || y < 1 || x > n || y > m)
		return;
	if (map[x][y] == 'D' && time == t)
	{
		flag = true;
		return;
	}
	if ((t - time) % 2 != (abs(x - endx) + abs(y - endy)) % 2)
		return;
	if (t - time - abs(x - endx) - abs(y - endy) < 0)
		return;
	if (n * m - wall <= t)
		return;    
	vis[x][y] = true;
	for (int i = 0;i < 4;i++)
	{
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if (!vis[tx][ty] && !flag)
		{
			dfs(tx, ty, time + 1);
			vis[tx][ty] = false;
		}
	}
}
int main()
{
	while (cin >> n >> m >> t && n && m && t)
	{
		wall = 0;
		flag = false;
		memset(map, 0, sizeof(map));
		memset(vis, false, sizeof(vis));
		for (int i = 1;i <= n;i++)
			for (int j = 1;j <= m;j++)
			{
				cin >> map[i][j];
				if (map[i][j] == 'S')
					startx = i, starty = j;
				if (map[i][j] == 'X')
					vis[i][j] = true, wall++;
				if (map[i][j] == 'D')
					endx = i, endy = j;
			}
		dfs(startx, starty, 0);
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}