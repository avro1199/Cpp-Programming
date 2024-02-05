#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, fact = 1;
	long long M = 1e9 + 7;

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		fact = (fact * i) % M; // Actual exp : fact = (fact * (i % M)) % M;
	}

	cout << fact;

	return 0;
}