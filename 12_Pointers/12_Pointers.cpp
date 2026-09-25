#include <iostream>
using namespace std;


int main() {
    int num1;
    int num2;
    int num3;

    int* pnum1 = &num1;
    int* pnum2 = &num2;
    int* pnum3 = &num3;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    int product = *pnum1 * *pnum2 * *pnum3;
    int average = (*pnum1 + *pnum2 + *pnum3) / 3;
    int minimum = min({ *pnum1, *pnum2, *pnum3 });

    cout << "Numbers: " << endl;
    cout << num1 << " " << num2 << " " << num3 << endl;
    cout << "Product: " << endl;
    cout << product << endl;
    cout << "Average: " << endl;
    cout << average << endl;
    cout << "Minimum: " << endl;
    cout << minimum << endl;

    // zav 2

    const int size = 10;
    int arr[size];
    int* parr = &arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> *parr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << *parr[i] << " ";
    }
}