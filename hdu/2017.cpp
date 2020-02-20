/*字符串统计*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		int sum = 0, len = s.length();
		for (int i = 0;i < len;i++)
			if (s.at(i) >= '0' && s.at(i) <= '9')
				sum++;
		cout << sum << endl;
	}
	return 0;
}