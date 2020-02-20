/*A hard puzzle*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		a %= 10;
		b %= 4;
		if (b == 0)
			b = 4;
		cout << (int)pow(a, b) % 10 << endl;
	}
	return 0;
}