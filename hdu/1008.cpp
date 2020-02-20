/*Elevator*/
#include<iostream>
using namespace std;
int main()
{
	int n, a;
	while (cin >> n && n)
	{
		int t = 0, sum = 0;
		while (n--)
		{
			cin >> a;
			if (a > t)
				sum += 6 * (a - t) + 5;
			else
				sum += 4 * (t - a) + 5;
			t = a;
		}
		cout << sum << endl;
	}
	return 0;
}