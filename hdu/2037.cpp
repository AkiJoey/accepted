/*今年暑假不AC*/
#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int start;
	int end;
}record[100];
bool cmp(const node& a, const node& b)
{
	return a.end < b.end;
}
int main()
{
	int n;
	while (cin >> n && n)
	{
		for (int i = 0;i < n;i++)
			cin >> record[i].start >> record[i].end;
		sort(record, record + n, cmp);
		int count = 0, lastend = 0;
		for (int i = 0;i < n;i++)
			if (record[i].start >= lastend)
			{
				count++;
				lastend = record[i].end;
			}
		cout << count << endl;
	}
	return 0;
}