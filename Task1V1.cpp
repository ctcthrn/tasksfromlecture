/*
Program that calculates the variant number
Variant number – the remainder of dividing the sum of all the letters
of the surname by the number of variants.
*/

#include <iostream>
using namespace std;

int main()
{
	int numvar;
	cout << "Enter the number of variants" << endl;
	cin >> numvar;
	
	string sname;
	cout << "Enter a surname" << endl;
	cin >> sname;
	
	int var = sname.length() % numvar + 1;
	/*sname.length() - string length or number of letters
	(sum of all the letters of the surname)*/
	cout << "Your variant - " << var;
}
