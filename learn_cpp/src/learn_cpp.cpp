//============================================================================
// Name        : learn_cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "MyString.hpp"

// P 34
template<typename C>
ostream& operator<< (ostream& out, MyString<C>& str);

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	MyString<char> a;

	a.operator+('A');
	a.operator+('B');
	a.operator+('C');

	cout << a;

	cout << endl;

	return 0;
}

template<typename C>
ostream& operator<< (ostream& out, MyString<C>& str) {
	str.print(out);
	return out;
}
