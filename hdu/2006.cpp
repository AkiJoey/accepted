/*求奇数的乘积*/
#include<iostream>
using namespace std;
int main()
{
	int a, n, pro = 1;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> a;
			if (a % 2)
				pro *= a;
		}
		cout << pro << endl;
		pro = 1;
	}
	return 0;
}