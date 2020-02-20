/*蟠桃记*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int a = 1;
		while (--n)
			a = (a + 1) * 2;
		cout << a << endl;
	}
	return 0;
}