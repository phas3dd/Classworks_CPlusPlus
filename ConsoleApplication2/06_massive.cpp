#include <iostream>
using namespace std;

int main() {

    const int size = 10;
    int product = 1;

    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr1[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        product *= arr1[i];
    }
    cout << product << " ";
    cout << endl;
    cout << endl;
    cout << endl;

    // zav 2

    const int size2 = 7;
    int arr2[size2] = {-5, -7, 8, 16, -1, 12, 32};
    int count_negative = 0;
    int count_positive = 0;
    for (int k = 0; k < size2; k++)
    {
        if (arr2[k] < 0) {
            count_negative++;
        }
    }
     cout << count_negative << " ";
    cout << endl;
    for (int k = 0; k < size2; k++)
    {
        if (arr2[k] > 0) {
            count_positive++;
        }
    }
        cout << count_positive << " ";
    cout << endl;
    for (int k = 0; k < size2; k++)
    {
        cout << arr2[k] << " ";
    }
}