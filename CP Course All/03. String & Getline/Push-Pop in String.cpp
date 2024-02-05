#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;

	str = "avro";

	cout << str << endl;

	str.push_back('R');
	cout << str << endl;

	str.push_back('j');
	cout << str << endl;

	str.pop_back();

	cout << str << endl;

return 0;
}