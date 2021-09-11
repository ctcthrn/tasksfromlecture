#include <iostream>
#include "Task2strutil.h"

using namespace std;

int strConteins(char* a, char* str);

int main()
{
	string str, a;
	cout << "enter the strings" << endl;
	cin >> str >> a;
	
	cout << strConteins(a, str);
}
