/*阿牛的EOF牛肉串*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	long long a[39] = {3, 8};
	for (int i = 2;i < 39;i++)
		a[i] = a[i - 1] * 2 + a[i - 2] * 2;
	while (cin >> n)
		cout << a[n - 1] << endl;
	return 0;
}