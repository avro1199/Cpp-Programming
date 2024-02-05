#include <iostream>

using namespace std;

int main()
{
	int *ptr;
	short int i1 = 1;
	int i2 = 1;
	long long i3 = 3;

	double d1 = 100;
	long double d2 = 101;

	float f1 = 1.10001;
	long f2 = 2;

	cout << "\tI am Rj Avro Biswas @@" << endl
		 << endl;

	cin >> f2;

	i1 += 32768;
	ptr = &i2;
	cout << ptr << endl;
	i2 += 2147483647;
	i2 -= 1;

	cout << "Size of Short Int = " << sizeof(i1) << endl;
	cout << "Size of Norml Int = " << sizeof(i2) << endl;
	cout << "Size of Long  Long = " << sizeof(i3) << "\n" << endl;

	cout << "Size of Norml Double = " << sizeof(d1) << endl;
	cout << "Size of  Long Double = " << sizeof(d2) << "\n" << endl;

	cout << "Size of Norml Float = " << sizeof(f1) << endl;

	cout << "Size of Norml Long  = " << sizeof(f2) << endl;

	return 0;
}