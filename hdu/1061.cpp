/*Rightmost Digit*/
#include<iostream>
using namespace std;
int main()
{
	int n, a, s[20] = { 0, 1, 4, 7, 6, 5, 6, 3, 6, 9, 0, 1, 6, 3, 6, 5, 6, 7, 4, 9 };
	cin >> n;
	while (n--)
	{
		cin >> a;
		cout << s[a % 20] << endl;
	}
	return 0;
}