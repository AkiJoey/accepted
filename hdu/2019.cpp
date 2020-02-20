/*数列有序!*/
#include<iostream>
using namespace std;
int main()
{
	int n, m, a;
	while (cin >> n >> m && (n || m))
	{
		int flag = 0;
		while (n--)
		{
			cin >> a;
			if (a <= m)
				cout << a << " ";
			else if (flag)
				cout << " " << a;
			else
			{
				cout << m << " " << a;
				flag = 1;
			}
		}
		if (flag)
			cout << endl;
		else
			cout << m << endl;
	}
	return 0;
}