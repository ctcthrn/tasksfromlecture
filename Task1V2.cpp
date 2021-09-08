/*
Program that calculates the variant number
3.Golunova => 8/3~2.67 remainder 2 => variant 2
Variant number - the remainder of the division of the code 
of the 1st letter of the name by the number of variants.
*/

#include <iostream>
using namespace std;

int main()
{
	int numvar;
	cout << "Enter the number of variants" << endl;
	cin >> numvar;
	
	string name;
	cout << "Enter a name" << endl;
	cin >> name;
	
	int var = name[0] % numvar + 1; //name[0] - code of the 1st letter in ASCII
	cout << "Your variant - " << var;
}



