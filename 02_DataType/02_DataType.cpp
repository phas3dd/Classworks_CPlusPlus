#include <iostream>
using namespace std;

int main() {

	// zav 1

	int inches;
	float inch = 2.54;
	cout << "TV size (inches): ";
	cin >> inches;
	float inches_in_cm = inches * inch;
	cout << "TV size: " << inches_in_cm << " cm" << endl;

	// zav 2

	int k_day;
	int days = 30;
	cout << "Daily feed consumption (g): ";
	cin >> k_day;
	float k_30_in_grams = k_day * days;
	float transform_kg = k_30_in_grams / 1000;
	cout << "Purchase of feed for 30 days: " << transform_kg << " kg" << endl;
}
