/*杨辉三角*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n;
	int** a = (int**)malloc(sizeof(int*) * 30);
	for (int i = 0;i < 30;i++)
		a[i] = (int*)malloc(sizeof(int) * 30);
	for (int i = 0;i < 30;i++)
		for (int j = 0;j <= i;j++)
			if (j == 0 || j == i)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	while (cin >> n)
	{
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j <= i;j++)
				if (j == 0)
					cout << a[i][j];
				else
					cout << " " << a[i][j];
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}