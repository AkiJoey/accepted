/*Number Sequence*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, n, res[49] = {1, 1};
	while (cin >> a >> b >> n, a || b || n)
	{
		for (int i = 2;i < n % 49;i++)
			res[i] = (a * res[i - 1] + b * res[i - 2]) % 7;
		cout << res[n % 49 - 1] << endl;
	}
	return 0;
}