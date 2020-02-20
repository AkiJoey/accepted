/*骨牌铺方格*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	long long a[50] = {1, 2};
	for (int i = 2;i < 50;i++)
		a[i] = a[i - 1] + a[i - 2];
	while (cin >> n)
		cout << a[n - 1] << endl;
	return 0;
}