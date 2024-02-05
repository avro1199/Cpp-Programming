#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
int ct[N]; // global arrays are helpful for counting => initialized with zero

int main()
{
	int n;
	cin >> n;

	int ara[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ara[i];
		ct[ara[i]]++;
	}

	int q;

	cin >> q;

	while (q--)
	{
		int number;
		// int count;

		cin >> number;

		// for (int i = 0; i < n; i++)
		// {
		// 	if (ara[i] == number)
		// 	{
		// 		count++;
		// 	}
		// }

		cout << ct[number] << endl;
	}

	return 0;
}