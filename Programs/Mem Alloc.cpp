#include <bits/stdc++.h>

using namespace std;

int add(int, int);

int main()
{
	int i, j;

	i = 5;
	j = 6;

	for(int l = 0; l < 1000000; l++){
		cout << add(i, j) << "  ";
	}

return 0;
}

int add(int a, int b)
{
	int *num;

	num = (int*)calloc(10000, sizeof(int));

	num[0] = a;
	num[100] = b;

	int sum = num[0] + num[100];
	free(num); // deallocating the mimory

	return sum;
}