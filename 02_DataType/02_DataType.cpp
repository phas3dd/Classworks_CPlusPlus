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

	// zav 1

	int num1;
	int num2;
	int num3;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	int sum = num1 + num2 + num3;
	cout << "First number: " << num1 << "\nSecond number: " << num2 << "\nThird number: " << num3 << "\nSumma of this numbers: " << sum << endl;

	// zav 2

	float number1;
	float number2;
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	
	float arithmetic = (number1 + number2) / 2;

	cout << "arithmetic mean of your 2 numbers: " << arithmetic << endl;

	// zav 3

	int numberkm;
	cout << "Enter kilometers: ";
	cin >> numberkm;

	int meters = numberkm * 1000;
	
	cout << meters << " Meters in " << numberkm << " kilometers" << endl;

	// zav 4

	const int item_price_1 = 150;
	const int item_price_2 = 200;
	const int item_price_3 = 175;
	const int item_price_4 = 140;

	int item_quant_1;
	int item_quant_2;
	int item_quant_3;
	int item_quant_4;

	cout << "Enter the quantity of first item: ";
	cin >> item_quant_1;
	cout << "Enter the quantity of second item: ";
	cin >> item_quant_2;
	cout << "Enter the quantity of third item: ";
	cin >> item_quant_3;
	cout << "Enter the quantity of fourth item: ";
	cin >> item_quant_4;

	int item_1 = item_price_1 * item_quant_1;
	int item_2 = item_price_2 * item_quant_2;
	int item_3 = item_price_3 * item_quant_3;
	int item_4 = item_price_4 * item_quant_4;

	int summary = item_1 + item_2 + item_3 + item_4;

	cout << "Item 1 | 150 | x" << item_quant_1 << endl;
	cout << "Item 2 | 200 | x" << item_quant_2 << endl;
	cout << "Item 3 | 175 | x" << item_quant_3 << endl;
	cout << "Item 4 | 140 | x" << item_quant_4 << endl;
	cout << "Summary | " << summary << endl;
}
