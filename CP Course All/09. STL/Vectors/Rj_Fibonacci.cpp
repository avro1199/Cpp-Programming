#include <bits/stdc++.h>

using namespace std;

vector <long long> fib = {0, 1};

// int ct;

long long fibo(long long unsigned n)
{
	// ct++;

	if(n < fib.size())
	{
		return fib[n];
	}

	fib.push_back((fibo(n-2) + fibo(n-1)));
	return fib[n];
}

void print_Vec(vector <long long> &v)
{
	for(long long unsigned i = 0; i < v.size(); i++)
	{
		cout << setw(2) << setfill('0') << i << " => " << setw(3) << v.at(i) << endl;
	}
}

int main()
{

	// int n;

	// cin >> n;
	int q;

	cin >> q;

	while(q--)
	{
		int num;

		cin >> num;

		cout << fibo(num) << endl;
	}

	// fibo(n);

	// cout << "Fibo Called : " << ct << endl;

	print_Vec(fib);

	return 0;
}