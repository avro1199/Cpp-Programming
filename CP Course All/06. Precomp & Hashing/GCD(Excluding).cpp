#include <bits/stdc++.h>

using namespace std;

const int N = 100;

long long fwd_gcd[N];
long long bkd_gcd[N];

int main()
{
	int n;
	cin >> n;

	long long ara[n];

	for(int i = 1; i <= n; i++)
	{
		cin >> ara[i];
	}

	for(int i = 1; i <= n; i++)
	{
		fwd_gcd[i] = __gcd(fwd_gcd[i - 1], ara[i]);
	}

	for(int i = n; i >= 1; i--)
	{
		bkd_gcd[i] = __gcd(bkd_gcd[i + 1], ara[i]);
	}

	int t;
	cin >> t;
	while(t--)
	{
		int l, r;
		cin >> l >> r;

		cout << __gcd(fwd_gcd[l - 1], bkd_gcd[r + 1]) << endl;
	}
	

	return 0;
}