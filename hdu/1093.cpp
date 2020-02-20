/*A+B for Input-Output Practice (V)*/
#include<iostream>
using namespace std;
int main()
{
	int a, n, m, s = 0;
	cin >> n;
	while (n--)
	{
		cin >> m;
		while (m--)
		{
			cin >> a;
			s += a;
		}
		cout << s << endl;
		s = 0;
	}
	return 0;
}