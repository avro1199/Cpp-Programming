#include <iostream>

using namespace std;

class avro
{
public:
	static int count;
	int roll;

public:
	void show()
	{
		count++;
		cout << "Roll = " << roll << endl;
	}
};

int avro::count = 0;

int main()
{
	avro rj, jr;

	rj.roll = 02;

	rj.show();

	cout << avro::count << endl;

	cout << "\t" << jr.count;

	return 0;
}