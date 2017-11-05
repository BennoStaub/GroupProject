#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
int Operator;
int zahl1, zahl2;

cout << "[0] = multiplizieren; [1] = dividieren" << endl;
cout << "Wähl us zwüschet multipliziere und dividiere" << endl;
cin >> Operator;

cout << "Füeg zwei Zahle hinzue" << endl;
cin >> zahl1;
cin >> zahl2;

switch (Operator) {
	case 0:
    cout << zahl1*zahl2;
    break;
	case 1:
	cout << zahl1/zahl2;
	break;
	default:
	cout << "Gib die richtig Zahl i du spasst!";
	break;
	}

	return 0;
}
