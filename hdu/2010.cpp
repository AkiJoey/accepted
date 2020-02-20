/*水仙花数*/
#include<iostream>
using namespace std;
int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		int flag = 0;
		if (m <= 153 && n >= 153)
		{
			cout << 153;
			flag = 1;
			if (n < 370)
			{
				cout << endl;
				continue;
			}
			cout << " ";
		}
		if (m <= 370 && n >= 370)
		{
			cout << 370;
			flag = 1;
			if (n < 371)
			{
				cout << endl;
				continue;
			}
			cout << " ";
		}
		if (m <= 371 && n >= 371)
		{
			cout << 371;
			flag = 1;
			if (n < 407)
			{
				cout << endl;
				continue;
			}
			cout << " ";
		}
		if (m <= 407 && n >= 407)
		{
			cout << 407 << endl;
			flag = 1;
		}
		if (!flag)
			cout << "no" << endl;
	}
	return 0;
}