/*不容易系列之二*/
#include<iostream>
using namespace std;
int main()
{
	int n, x, a[31] = {3};
	for (int i = 1;i < 31;i++)
		a[i] = a[i - 1] * 2 - 2;
	cin >> n;
	while (n--)
	{
		cin >> x;
		cout << a[x] << endl;
	}
	return 0;
}