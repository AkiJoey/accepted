/*Hello Kiki*/
#include<iostream>
using namespace std;
typedef long long ll;
ll exGcd(ll a, ll b, ll& x, ll& y)
{
	if (!b)
	{
		x = 1, y = 0;
		return a;
	}
	ll gcd = exGcd(b, a % b, y, x);
	y -= a / b * x;
	return gcd;
}
ll exCrt(ll* a, ll* m, int n)
{
	ll ans = a[0], mod = m[0];
	for (int i = 1;i < n;i++)
	{
		ll x, y, gcd = exGcd(mod, m[i], x, y);
		if ((a[i] - ans) % gcd)
			return -1;
		x = (a[i] - ans) / gcd * x % (m[i] / gcd);
		ans += mod * x;
		mod = mod / gcd * m[i];
		ans %= mod;
	}
	return ans > 0 ? ans : ans + mod;
}
int main()
{
	int t, n;
	ll a[6], m[6];
	cin >> t;
	for (int i = 1;i <= t;i++)
	{
		cin >> n;
		for (int j = 0;j < n;j++)
			cin >> m[j];
		for (int j = 0;j < n;j++)
			cin >> a[j];
		cout << "Case " << i << ": " << exCrt(a, m, n) << endl;
	}
	return 0;
}