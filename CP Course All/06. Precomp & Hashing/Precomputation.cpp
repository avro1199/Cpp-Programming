#include <bits/stdc++.h>

using namespace std;

int M = 1e9 + 7;

const int N = 1e5 + 10;
long long fact[N];

int main()
{
	fact[0] = fact[1] = 1;

	for (int i = 2; i <= N; ++i)
	{
		fact[i] = (fact[i - 1] * i) % M;
	}

	int s, e;

	cin >> s >> e;

	for (int i = s; i <= e; ++i)
	{
		cout << i << " " << fact[i] << endl;
	}

	// cout << fact[21];

	return 0;
}