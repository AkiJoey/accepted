/*母牛的故事*/
#include<iostream>
using namespace std;
int main()
{
	int n, a[54] = {1, 2, 3};
	for (int i = 3;i < 54;i++)
		a[i] = a[i - 1] + a[i - 3];
	while (cin >> n && n)
		cout << a[n - 1] << endl;
	return 0;
}