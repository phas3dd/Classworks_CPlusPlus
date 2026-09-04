#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 101; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	
	// zav 2

	cout << "Zavdannya 2: " << endl;
	for (int even = 0; even < 201; even += 2) {
		cout << even << " ";
	}
	cout << endl;

	// zav 3

	cout << "Zavdannya 3" << endl;

	int N;
	cout << "Enter number: ";
	cin >> N;
	int k = 0;
	int number;
	int summa = 0;

	while (k < N)
	{
		k++;
		cout << "Enter" << k << "number ";
		cin >> number;
		if (number % 2 == 0)
			summa += number;
	}
	cout << "Summa numbers = " << summa << endl;

	// zav 4
	int sum_hours = 0;
	cout << " Zavdannya 4" << endl;
	for (int hour = 0; hour < 13; hour++)
	{
		
		cout << hour << " ";
		sum_hours += hour;
	}
	cout << endl;
	cout << sum_hours << " ";
}