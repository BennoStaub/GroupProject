//============================================================================
// Name        : grr.cpp
// Author      : Carina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main() {
	string list [3][5] = {{"dog", "cat", "fish", "horse", "mouse"},{"hund", "katze", "fisch", "pferd", "maus"}, {"chien","chat", "poisson", "cheval","souris"}};

	cout << "Choose: [2]French or [0]English" << endl;

	int choice;
	cin >> choice;
	cin.ignore();
	cout << "translate" << endl;

	srand(time(0));
	string input = "hi";
	int iter = rand();

	 srand(time(NULL));
	 string list [3][5] = rand (); "dog";

	while(input != "quit"){
		iter = rand();
		cout << list[1][iter%5];
		getline(cin, input);
		if(input == "quit"){
			break;
		}
		if(input == list[choice][iter%5]){
			cout << "correct" << endl;
		}else{
			cout << "no bitch" << endl;
		}
	}
	return 0;


}
