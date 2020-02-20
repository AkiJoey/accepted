/*数据的交换输出*/
#include<iostream>
using namespace std;
int main()
{
	int n, s[100];
	while (cin >> n && n)
	{
		int min = 0;
		for (int i = 0;i < n;i++)
		{
			cin >> s[i];
			if (s[i] < s[min])
				min = i;
		}
		if (min)
			s[0] ^= s[min] ^= s[0] ^= s[min];
		for (int i = 0;i < n - 1;i++)
			cout << s[i] << " ";
		cout << s[n - 1] << endl;
	}
	return 0;
}