/*整数解*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m && (n || m))
	{
		int delta = n * n - 4 * m;
		if (delta < 0)
		{
			cout << "No" << endl;
			continue;
		}
		int x = sqrt(delta);
		if (x * x != delta)
		{
			cout << "No" << endl;
			continue;
		}
		int x1 = n + x, x2 = n - x;
		if (x1 % 2 || x2 % 2)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}