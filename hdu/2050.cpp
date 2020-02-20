/*折线分割平面*/
#include<iostream>
using namespace std;
int main()
{
	int c, n;
	cin >> c;
	while (c--)
	{
		cin >> n;
		cout << 2 * n * n - n + 1 << endl;
	}
	return 0;
}