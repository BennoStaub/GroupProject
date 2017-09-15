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
using namespace std;

int main() {
	string list [3][5] = {{"dog", "cat", "fish", "horse", "mouse"},{"hund", "katze", "fisch", "pferd", "maus"}, {"chien","chat", "poisson", "cheval","souris"}};

	cout << "Choose: [2]French or [0]English" << endl;

	int choice;
	cin >> choice;
	cin.ignore();
	cout << "translate" << endl;

	string input = "hi";
	int iter = 0;
	while(input != "quit"){
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
		iter++;
	}
	return 0;


}
