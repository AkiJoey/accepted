/*计算球体积*/
#include<iostream>
#include<cstdio>
#define PI 3.1415927
using namespace std;
int main()
{
	double r;
	while (cin >> r)
		printf("%.3f\n", 4.0 / 3.0 * PI * r * r * r);
	return 0;
}