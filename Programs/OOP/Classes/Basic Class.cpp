#include <bits/stdc++.h>

using namespace std;

int main()
{
    class student {

		public:

        int roll;
        float marks;
        string name;

		void printname()
		{
			cout << "From print_name function => " << name;
		}
    };

    student avro;

    avro.roll = 02;
    avro.marks = 87.75;
    avro.name = "Rj Avro Biswas";

    cout << "\nRoll : " << avro.roll << "\nMarks : " << avro.marks << "\n";
	avro.printname();

    return 0;

}
