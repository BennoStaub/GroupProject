//============================================================================
// Name        : Mi.cpp
// Author      : Carina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	string list[24] = {"Nathanael", "Selim", "Ivan", "Eva", "Gabriela", "Seraina","Jana", "Luzia", "Ema", "Ribana", "Vivien", "Simona","Enea", "Marlon", "Dominic", "Jael", "Merle", "Anic", "Nia", "Elian", "Sven", "Nina", "Nilaya","Sophie"};
	cout << "Partners" << endl;

	srand(time(NULL));

	int i,j,k;

		for (i= 0; i<12; i++) {
			k = rand() % 24;
			j = rand() % 24;
			cout << list[k] << " " << list[j]  << endl;




	}



return 0;
}
