/*Rectangles*/
#include<iostream>
#include<cstdio>
using namespace std;
void swap(double& x, double& y)
{
	double t = x;
	x = y;
	y = t;
}
int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4, xmax, ymax, xmin, ymin;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		if (x1 > x2)
			swap(x1, x2);
		if (y1 > y2)
			swap(y1, y2);
		if (x3 > x4)
			swap(x3, x4);
		if (y3 > y4)
			swap(y3, y4);
		xmax = x1 > x3 ? x1 : x3;
		ymax = y1 > y3 ? y1 : y3;
		xmin = x2 < x4 ? x2 : x4;
		ymin = y2 < y4 ? y2 : y4;
		if (xmin < xmax || ymin < ymax)
			cout << "0.00" << endl;
		else
			printf("%.2f\n", (xmin - xmax) * (ymin - ymax));
	}
	return 0;
}