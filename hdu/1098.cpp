/*Ignatius's puzzle*/
#include<iostream>
using namespace std;
int main()
{
	int a, k;
	while (cin >> k)
	{
		if (k % 65 == 0)
		{
			cout << "no" << endl;
			continue;
		}
		for (a = 1;a <= 65;a++)
			if ((18 + k * a) % 65 == 0)
			{
				cout << a << endl;
				break;
			}
		if (a > 65)
			cout << "no" << endl;
	}
	return 0;
}