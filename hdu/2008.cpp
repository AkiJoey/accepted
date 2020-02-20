/*数值统计*/
#include<iostream>
using namespace std;
int main()
{
	int n, a = 0, b = 0, c = 0;
	double m;
	while (cin >> n && n)
	{
		while (n--)
		{
			cin >> m;
			if (m < 0)
				a++;
			else if (m == 0)
				b++;
			else
				c++;
		}
		cout << a << " " << b << " " << c << endl;
		a = b = c = 0;
	}
	return 0;
}