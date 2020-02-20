/*An easy problem*/
#include<iostream>
using namespace std;
int main()
{
	int n, y;
	char x;
	cin >> n;
	while (n-- && cin >> x >> y)
		cout << y + (x < 97 ? x - 'A' + 1 : 'a' - x - 1) << endl;
	return 0;
}