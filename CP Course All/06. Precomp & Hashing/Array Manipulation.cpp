#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
long long int ara[N];
long long int pf_sum[N];
vector <long long> pf;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> ara[i];
	}

	int q;
	cin >> q;
	while (q--)
	{
		int l, r, val;
		cin >> l >> r >> val;

		ara[l] += val;
		ara[r + 1] -= val;
	}

	for(int i = 1; i <= n; i++){
		pf_sum[i] = pf_sum[i - 1] + ara[i];
	}

	int max = pf_sum[1];

	for(int i = 1; i <= n; i++)
	{
		cout << pf_sum[i] << " ";
		if(pf_sum[i] > max)
		{
			max = pf_sum[i];
		}
	}

	cout << endl << max;

	return 0;
}