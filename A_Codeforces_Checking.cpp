#include <bits/stdc++.h>

using namespace std;

int hsh[26];

int main()
{
	string str = "codeforces";

	for(int i = 0; i < str.length(); i++)
	{
		hsh[str[i] - 'a']++;
	}

	int q;
	cin >> q;
	while(q--)
	{
		char ch;
		cin >> ch;
		if(hsh[ch - 'a'] > 0)
		{
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}