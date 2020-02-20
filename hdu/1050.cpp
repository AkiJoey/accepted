/*Moving Tables*/
#include<iostream>
using namespace std;
int main()
{
	int t, n, x, y;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int ans = 0, room[400] = { 0 };
		for (int i = 0;i < n;i++)
		{
			cin >> x >> y;
			if (x % 2 == 0)
				x--;
			if (y % 2 == 0)
				y--;
			if (x > y)
				x ^= y ^= x ^= y;
			for (;x <= y;x++)
				room[x]++;
		}
		for (int i = 0;i < 400;i++)
			if (room[i] > ans)
				ans = room[i];
		cout << ans * 10 << endl;
	}
	return 0;
}