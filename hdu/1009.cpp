/*FatMouse' Trade*/
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node
{
	double j, f, quo;
}room[1000];
bool cmp(const node& a, const node& b)
{
	return a.quo > b.quo;
}
int main()
{
	int m, n;
	while (cin >> m >> n && (m != -1 || n != -1))
	{
		for (int i = 0;i < n;i++)
		{
			cin >> room[i].j >> room[i].f;
			room[i].quo = room[i].j / room[i].f;
		}
		sort(room, room + n, cmp);
		double sum = 0;
		for (int i = 0;i < n;i++)
			if (m >= room[i].f)
			{
				m -= room[i].f;
				sum += room[i].j;
			}
			else
			{
				sum += m * room[i].quo;
				break;
			}
		printf("%.3f\n", sum);
	}
	return 0;
}