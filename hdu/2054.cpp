/*A == B ?*/
#include<iostream>
#include<string>
using namespace std;
void remake(string &s)
{
	int flag = 0, len = s.length();
	for (int i = 0;i < len;i++)
		if (s.at(i) == '.')
		{
			flag = 1;
			break;
		}
	if (flag)
	{
		for (int i = len - 1;s.at(i) == '0';i--)
		{
			s.erase(i);
			len--;
		}
		if (s.at(len - 1) == '.')
			s.erase(len - 1);
	}
}
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		remake(a);
		remake(b);
		if (a == b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}