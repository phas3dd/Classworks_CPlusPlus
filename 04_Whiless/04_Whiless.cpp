#include <iostream>
using namespace std;

int main() {
    for (int i = 14; i < 124; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // zav 2

    for (int noteven = 1; noteven < 100; noteven += 2) {
        cout << noteven << " ";
    }
    cout << endl;

    // zav 3

    int N;
    cout << "Enter number: ";
    cin >> N;
    int k = 0;
    int number;
    int summa = 0;

    while (k < N)
    {
        k++;
        cout << "Enter " << k << " number ";
        cin >> number;
        if (number < 0)
            summa++;
    }
    cout << "Negative numbers: " << summa << endl;

    // zav 4

    int l = 0;
    int num = 1;
    int product = 1;
    float average;

    while (l < 8)
    {
        l++;
        cout << "Enter " << l << " number: ";
        cin >> num;

        summa += num;
        product *= num;
    }
    average = summa / 8;
    cout << "Product of your numbers: " << product << endl;
    cout << "Average of your numbers: " << average << endl;

    cout << endl;

    // zav 5

    for (int even = 100; even > 0; even -= 2) {
        cout << even << " ";
    }
    cout << endl;

    // zav 6

    int v = 0;
    int numb = 1;
    int p = 1;

    while (v < 5)
    {
        v++;
        cout << "Enter " << v << " number: ";
        cin >> numb;
        p *= numb;
    }
    cout << "Product of your numbers: " << p << endl;
    cout << endl;

}