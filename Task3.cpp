/*
The remainder of dividing the number in the list
by the number of variants
3.Golunova => 3 % 5 = 3

Variant 3 - true - if the strings are equal
bool compare(char* str);
*/
#include <iostream>
#include <cstring>
using namespace std;

class FooString {
	char* buf;
public:
	FooString(char* tbuf);
	~FooString();
	void show();
	bool compare(char* str);
};

FooString::FooString(char* tbuf) {
	int size = strlen(tbuf) + 1;
	buf = new char[size];
	for (size_t i = 0; i < size; i++) {
		buf[i] = tbuf[i];
	}
}

FooString::~FooString() {
	delete[] buf;
}

void FooString::show() {
	for (int i = 0; buf[i] != '\0'; i++) {
		cout << buf[i];
	}
	cout << endl;
}

bool FooString::compare (char* str) {
	int i = 0;
	while (str[i] != '\0' || buf[i] != '\0') {
		if (str[i] != buf[i])
			return false;
		i++;
	}
	return true;
}

int main() {
	char c[10] = "Check";
	FooString str(&c[0]);
	cout << "Test method compare: ";
	if (str.compare(c)) {
		c[2] = 'a';
		if (!str.compare(c)) {
			c[6] = 'b';
			if (!str.compare(c)) {
				cout << "TRUE" << endl;
			}
			else {
				cout << "FALSE" << endl;
			}
		}
		else {
			cout << "FALSE" << endl;
		}
	}
	else {
		cout << "FALSE" << endl;
	}
	return 0;
}
