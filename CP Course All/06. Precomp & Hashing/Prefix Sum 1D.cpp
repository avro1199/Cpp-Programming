#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
long long pf_sum[N];

int main()
{
	int n;
	cin >> n;
	int ara[n];
	for (int i = 1; i <= n; i++)
	{
		cin >> ara[i];
		pf_sum[i] = pf_sum[i - 1] + ara[i];
	}

	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << (pf_sum[r] - pf_sum[l - 1]) << endl;
	}

	return 0;
}