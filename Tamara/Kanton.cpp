
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string list [2][26] {{"SG", "AR", "AI", "TG", "GR", "SH", "TI", "LU", "SZ", "ZG", "NW", "OW", "UR", "BE", "BS", "BL", "FR", "SO", "NE", "GE", "VS", "ZH", "AG", "VD","GL" "JU"},
		{"St. Gallen", "Herisau", "Appenzell", "Frauenfeld", "Chur", "Schaffhausen", "Bellinzona", "Luzern", "Schwyz", "Zug", "Nidwalden", "Obwalden", "Uri", "Bern", "Basel", "Liestal", "Freiburg", "Solothurn", "Neuenburg", "Genf", "Sion", "Zürich", "Aarau", "Waadt", "Glarus", "Delsberg"}};
	cout << "Nenn d'Hauptstadt vom Kanton: " << endl;
	int iter= 0;

	string input = "Capital";
	while(input != "quit"){
		cout << list[0] [iter%26];
		getline(cin, input);

	if(input == list[1][iter%26]){
		cout << "correct" << endl;
	}else{
		cout << "no bitch" << endl;
	}
	iter++;

	}
	return 0;


}

