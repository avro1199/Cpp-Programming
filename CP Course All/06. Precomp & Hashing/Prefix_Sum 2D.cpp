#include <bits/stdc++.h>

using namespace std;

const int N = 100;
long long pf_sum[N][N];

int main()
{
	int n, m;
	cin >> n >> m;
	int ara[n][m];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> ara[i][j];
			pf_sum[i][j] = ara[i][j] + pf_sum[i - 1][j] + pf_sum[i][j - 1] - pf_sum[i - 1][j - 1];
		}
	}

	cout << "Prefix_Sum :" << endl;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << setw(2) << setfill('0') << pf_sum[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << "Queries Result : " << endl;

	int q;
	cin >> q;

	while(q--)
	{
		int a, b, c, d;

		cin >> a >> b >> c >> d;

		cout << pf_sum[c][d] - pf_sum[a - 1][d] - pf_sum[c][b - 1] + pf_sum[a - 1][b - 1] << endl;
	}

	return 0;
}