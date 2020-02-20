/*Oulipo*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void getNext(int* next, char* t, int tlen)
{
	int i = 0, j = -1;
	next[0] = -1;
	while (i < tlen - 1)
		if (j == -1 || t[i] == t[j])
		{
			i++;
			j++;
			next[i] = j;
		}
		else
			j = next[j];
}
int kmpSum(char* s, char* t)
{
	int i = 0, j = 0, sum = 0, next[10010], slen = strlen(s), tlen = strlen(t);
	getNext(next, t, tlen);
	while (i < slen)
	{
		if (j == -1 || s[i] == t[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];
		if (j == tlen)
		{
			i--;
			j--;
			sum++;
			j = next[j];
		}
	}
	return sum;
}
int main()
{
	int n;
	char s[1000010], t[10010];
	cin >> n;
	getchar();
	while (n--)
	{
		gets(t);
		gets(s);
		cout << kmpSum(s, t) << endl;
	}
	return 0;
}