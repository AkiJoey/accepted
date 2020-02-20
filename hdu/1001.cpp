/*Sum Problem*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int s = n % 2 ? (n + 1) / 2 * n : n / 2 * (n + 1);
		cout << s << endl << endl;
	}
	return 0;
}