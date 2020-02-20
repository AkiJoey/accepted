/*Fibbonacci Number*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	long long a[51] = {0, 1};
	for (int i = 2;i < 51;i++)
		a[i] = a[i - 1] + a[i - 2];
	while (cin >> n && n != -1)
		cout << a[n] << endl;
	return 0;
}