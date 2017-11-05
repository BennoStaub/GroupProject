#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string list [2][5] = {{"Amerika", "England", "Italien", "Frankreich", "Schweden"}, {"Washington", "London", "Rom", "Paris", "Stockholm"}};
	cout << "Nenn d'Hauptstadt vom Land: " << endl;
	int iter = 0;

	string input = "hi";
		while(input != "quit"){
		cout << list[0][iter%5];
		getline(cin, input);
		if(input == "quit"){
			break;
		}
		if(input == list[1][iter%5]){
			cout << "correct" << endl;
		}else{
			cout << "no bitch" << endl;
		}
		iter++;
	}
	return 0;


}
