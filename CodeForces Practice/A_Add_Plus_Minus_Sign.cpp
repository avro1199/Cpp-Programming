#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		char ch;
		int n, sum;

		cin >> n;

		cin >> ch;

		sum = ch - '0';

		for(int i  = 0; i < n-1; i++){
			cin >> ch;

			if(ch == '0'){
				cout << '+';
			}
			else if(sum > 0){
				cout << '-';
				sum = sum - (ch - '0');
			}
			else{
				cout << '+';
				sum = sum + (ch - '0');
			}
		}

		cout << endl;
	}

	return 0;
}