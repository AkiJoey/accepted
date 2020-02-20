/*第几天？*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int y, m, d, sum[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	while (~scanf("%d/%d/%d", &y, &m, &d))
		if (m > 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
			cout << sum[m - 1] + d + 1 << endl;
		else
			cout << sum[m - 1] + d << endl;
	return 0;
}