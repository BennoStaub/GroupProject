//============================================================================
// Name        : deep.cpp
// Author      : Carina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
double zahl1, zahl2, result;
char zeiche;
	cout << "mach eh rechnig mit ganze Zahle:" << endl;
	cin >> zahl1 >> zeiche >> zahl2;
	 switch (zeiche){
	 case '+' : result = zahl1+zahl2;
	 break;

	 case '-' : result = zahl1-zahl2;
	 break;

	 case '*' : result = zahl1*zahl2;
	 break;

	 case '/' : result = zahl1/zahl2;
	 break;



	 }
	 cout << zahl1 <<  ' ' << zeiche << ' ' << zahl2 << " = " << result << endl;

	return 0;
}
