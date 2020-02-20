/*人见人爱A+B*/
#include<iostream>
using namespace std;
int main()
{
	int n, ah, am, as, bh, bm, bs;
	cin >> n;
	while (n--)
	{
		cin >> ah >> am >> as >> bh >> bm >> bs;
		if (as + bs >= 60)
			am++;
		if (am + bm >= 60)
			ah++;
		cout << ah + bh << " " << (am + bm) % 60 << " " << (as + bs) % 60 << endl;
	}
	return 0;
}