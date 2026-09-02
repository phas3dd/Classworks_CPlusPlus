#include <iostream>
using namespace std;

int main() {
	int country;
	cout << "Choose country to see capital city: " << endl;
	cout << "1 - Ukraine: " << endl;
	cout << "2 - Poland: " << endl;
	cout << "3 - Germany: " << endl;
	cout << "4 - France: " << endl;
	cout << "5 - Italy: " << endl;
	cout << "Enter your choice: ";
	cin >> country;

	switch (country) {
	case 1:
		cout << "The capital city of Ukraine is Kyiv!" << endl;
		break;
	case 2:
		cout << "The capital city of Poland is Warsaw!" << endl;
		break;
	case 3:
		cout << "The capital city of Germany is Berlin!" << endl;
		break;
	case 4:
		cout << "The capital city of France is Paris!" << endl;
		break;
	case 5:
		cout << "The capital city of Italy is Rome!" << endl;
		break;
	default:
		cout << "incorrect answer!" << endl;
		break;
	}
	return 0;

	// zav 2

	int day;
	cout << "Enter number of a day (1-7): " << endl;
	cin >> day;

	if (day > 0 and day <= 5) {
		cout << "It's a weekday!" << endl;
	}
	else if (day == 6 or day == 7) {
		cout << "It's a holiday!" << endl;
	}
	else {
		cout << "incorrect answer!" << endl;
	}

	// zav 3

	int direction;
	cout << "Choose ship's direction: " << endl;
	cout << "1 - North: " << endl;
	cout << "2 - South: " << endl;
	cout << "3 - West: " << endl;
	cout << "4 - East: " << endl;
	cout << "Enter your choice: ";
	cin >> direction;

	switch (direction) {
	case 1:
		cout << "The ship's direction after turning back: South" << endl;
		break;
	case 2:
		cout << "The ship's direction after turning back: North" << endl;
		break;
	case 3:
		cout << "The ship's direction after turning back: East" << endl;
		break;
	case 4:
		cout << "The ship's direction after turning back: West" << endl;
		break;
	default:
		cout << "incorrect answer!" << endl;
		break;

	}
	return 0;

	int animal;
	cout << "Choose animal to see the class: " << endl;
	cout << "1 - Lion 🦁: " << endl;
	cout << "2 - Eagle 🦅: " << endl;
	cout << "3 - Frog 🐸: " << endl;
	cout << "4 - Crocodile 🐊: " << endl;
	cout << "5 - Perch 🐟: " << endl;
	cout << "6 - Bee 🐝:" << endl;
	cout << "7 - Crayfish 🦞:" << endl;
	cout << "Enter your choice: ";
	cin >> animal;

	if (animal == 1) {
		cout << "The class of Lion is: Mammalia" << endl;
	}
	else if (animal == 2) {
		cout << "The class Eagle animal is: Aves" << endl;
	}
	else if (animal == 3) {
		cout << "The class of Frog is: Amphibia" << endl;
	}
	else if (animal == 4) {
		cout << "The class of Crocodile is: Reptilia" << endl;
	}
	else if (animal == 5) {
		cout << "The class of Perch is: Ray-finned fishes" << endl;
	}
	else if (animal == 6) {
		cout << "The class of Bee is: Insecta" << endl;
	}
	else if (animal == 7) {
		cout << "The class of Crayfish is: Higher crustaceans" << endl;
	}
	else {
		cout << "incorrect answer!" << endl;
	}
}