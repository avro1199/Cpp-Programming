#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str1, str2;

	str1 = "Rj";
	str2 = "Avro";

	str2.at(2) = 'R'; // same as str[2] = 'R'
	// str2 += 'u';

	str2.swap(str1);
	cout << str1.rfind("ro") << endl;

	cout << str1 + ' ' + str2;

return 0;
}