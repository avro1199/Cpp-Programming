#include <bits/stdc++.h>

using namespace std;

int add(int, int);

int main()
{
	int a, b;
	int sum;

	cin >> a >> b;

	sum = add(a, b);

	cout << sum;

	return 0;
}

int add(int n1, int n2)
{
	return n1 + n2;
}