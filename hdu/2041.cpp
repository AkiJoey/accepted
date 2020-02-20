/*超级楼梯*/
#include<iostream>
using namespace std;
int main()
{
	int n, m, a[40] = {0, 1, 2};
	for (int i = 3;i < 40;i++)
		a[i] = a[i - 1] + a[i - 2];
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << a[m - 1] << endl;
	}
	return 0;
}