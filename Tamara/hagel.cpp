#include <iostream>
#include <time.h>

using namespace std;

int main ()
{
	string list1[4] = {"Hello", "Flower", "Dog", "Cat"};
	string list2[4]= {"Hallo", "Blume", "Hund", "Katze"};

	cout << "Enter the German word" << endl;

	srand(time(NULL));
	string input;
	while(input != "quit"){
		int iter = rand();
		cout << list1[iter%2] << endl;
		getline(cin, input);
		if(input == list2[iter%2]){
			cout << "hei so guet" << endl;
		}else{
			cout << "din ernst?" << endl;
		}
	}
	return 0;
}

