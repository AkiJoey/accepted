/*Bitset*/
#include<iostream>
using namespace std;
int main()
{
	int n, a[10];
	while (cin >> n)
	{
		int i = 0;
		while (n)
		{
			a[i++] = n % 2;
			n /= 2;
		}
		for (i--;i >= 0;i--)
			cout << a[i];
		cout << endl;
	}
	return 0;
}