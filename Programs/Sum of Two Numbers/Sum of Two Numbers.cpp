#include <iostream>

using namespace std;

int main()
{
	float num1, num2, sum;

	cout << "Enter 1st Number : ";
	cin >> num1;
	cout << "Enter 2nd Number : ";
	cin >> num2;

	// adding two numbers
	sum = num1 + num2;

	cout << "\n\t" << num1 << " + " << num2 << " = " << sum << "\n\n";

	/* 
	returning 0
	from the main
	function .
	*/
	return 0;
}