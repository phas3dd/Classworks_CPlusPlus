#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

int stars(int N)
{
    if (N == 0) {
        return 0;
    }
    cout << "*";
    N--;
    stars(N);
}

int summa(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    return a + summa(a + 1, b);
}

int main() {
    // zav 1
    cout << power(2, 3) << endl;
    cout << endl;
    // zav 2
    stars(6);
    cout << endl;
    cout << endl;
    // zav 3
    int a;
    int b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << endl;
    cout << summa(a, b);
}