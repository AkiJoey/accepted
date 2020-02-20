/*偶数求和*/
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int sum = 0;
		for (int i = 2, j = 1;i <= n * 2;i += 2, j++)
		{
			sum += i;
			if (j % m == 0)
				if (i < n * 2)
				{
					cout << sum / m << " ";
					sum = 0;
				}
				else
					cout << sum / m << endl;
			else if (i == n * 2)
				cout << sum / (j % m) << endl;
		}
	}
	return 0;
}