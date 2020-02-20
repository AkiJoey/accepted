/*Palindromes _easy version*/
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
		int i, len = s.length();
		for (i = 0;i < len / 2;i++)
			if (s.at(i) != s.at(len - i - 1))
				break;
		if (i == len / 2)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}