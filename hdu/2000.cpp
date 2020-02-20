/*ASCII码排序*/
#include<iostream>
using namespace std;
int main()
{
	char a, b, c;
	while (cin >> a >> b >> c)
	{
		a > b ? a ^= b ^= a ^= b : 0;
		a > c ? a ^= c ^= a ^= c : 0;
		b > c ? b ^= c ^= b ^= c : 0;
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}