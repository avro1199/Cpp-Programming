#include <bits/stdc++.h>

using namespace std;

void add_ten(int &);

int main()
{
	int n;

	cin >> n;

	cout << n << endl;

	add_ten(n);

	cout << n << endl;

return 0;
}

void add_ten(int &a)
{
	a += 10;
}