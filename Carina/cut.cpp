//============================================================================
// Name        : cut.cpp
// Author      : Carina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	string calculate [4] = {"mult","div","add","sub"};
	cout << "Choose operation * [0], / [1], + [2], - [3] ";
	int choice;
		cin >> choice;
		cin.ignore();
		cout << "2 zahle zwisched 1-100" << endl;

	int zahl1, zahl2, result;

	cin >> zahl1 >> zahl2;

if (choice == 0)
	result = zahl1*zahl2;
	cout << zahl1 << '*' << zahl2 << '=' << result << endl;


if (choice == 1)
	result = zahl1/zahl2;
	cout << zahl1 << '/' << zahl2 << '=' << result << endl;


if (choice == 2)
	result = zahl1+zahl2;
	cout << zahl1 << '+' << zahl2 << '=' << result << endl;


if (choice == 3)
	result = zahl1-zahl2;
	cout << zahl1 << '-' << zahl2 << '=' << result << endl;

	else
		cout << "shit" << endl;




	return 0;

}
