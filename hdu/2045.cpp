/*不容易系列之(3)—— LELE的RPG难题*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	long long a[50] = {3, 6, 6};
	for (int i = 3;i < 50;i++)
		a[i] = a[i - 1] + a[i - 2] * 2;
	while (cin >> n)
		cout << a[n - 1] << endl;
	return 0;
}