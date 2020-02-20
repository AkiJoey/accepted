/*Tick and Tick*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double maxs = 12 * 60 * 60, d;
	double vh = 1.0 / 120, vm = 1.0 / 10, vs = 6;
	double hm = vm - vh, hs = vs - vh, ms = vs - vm;
	double thm = 360 / hm, ths = 360 / hs, tms = 360 / ms;
	while (cin >> d && d >= 0)
	{
		double s, e, res = 0, c = 360 - d;
		double dhm = d / hm, dhs = d / hs, dms = d / ms;
		double chm = c / hm, chs = c / hs, cms = c / ms;
		for (double i = 0;i <= maxs;i += thm)
			for (double j = 0;j <= maxs;j += ths)
			{
				if (j + dhs > i + chm)
					break;
				if (j + chs < i + dhm)
					continue;
				for (double k = 0;k <= maxs;k += tms)
				{
					if (k + dms > i + chm || k + dms > j + chs)
						break;
					if (k + cms < i + dhm || k + cms < j + dhs)
						continue;
					s = max(max(i + dhm, j + dhs), k + dms);
					e = min(min(i + chm, j + chs), k + cms);
					if (e > s)
						res += e - s;
				}
			}
        printf("%.3lf\n", res * 100 / maxs);
	}
	return 0;
}