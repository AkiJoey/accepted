/*A+B for Input-Output Practice (IV)*/
#include<iostream>
using namespace std;
int main()
{
	int a, n, s = 0;
	while (cin >> n && n != 0)
	{
		while (n--)
		{
			cin >> a;
			s += a;
		}
		cout << s << endl;
		s = 0;
	}
	return 0;
}