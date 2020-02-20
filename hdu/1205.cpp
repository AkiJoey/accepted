/*吃糖果*/
#include<iostream>
using namespace std;
int main()
{
	int t, n, m;
	cin >> t;
	while (t--)
	{
		long long max = 0, sum = 0;
		cin >> n;
		while (n--)
		{
			cin >> m;
			max = m > max ? m : max;
			sum += m;
		}
		if (sum - max < max - 1)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}