/*三角形*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	double a, b, c;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}