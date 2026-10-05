#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int str_length(char* str) {
    int i = 0;
    int c = 0;
    while (true)
    {
        if (str[i] != '\0') {
            c++;
        }
        else if (str[i] == '\0') {
            return c;
        }
    }
}

int main() {
    char str[255];
    cout << "Enter str: "; cin.getline(str, 255);
    int size = strlen(str);
    cout << endl;
    int a = 0;
    int o = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == 'a')
        {
            a++;
        }
        else if (str[i] == 'o')
        {
            o++;
        }
    }
    cout << "Count of a: " << a << endl;
    cout << "Count of o: " << o << endl;
    cout << endl;
    

    // zav 2

    int count_alpha = 0;
    int count_digit = 0;
    int count_space = 0;
    for (int i = 0; i < size; i++)
    {
        if (isalpha(str[i]))
        {
            count_alpha++;
        }
        else if (isdigit(str[i]))
        {
            count_digit++;
        }
        else if (isspace(str[i]))
        {
            count_space++;
        }
    }
    cout << "Alphas: " << count_alpha << endl;
    cout << "Digits: " << count_digit << endl;
    cout << "Spaces: " << count_space << endl;
    cout << endl;

    // zav 3

    for (int i = 0; i < size; i++)
    {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    cout << "New string: " << str << endl;

    // zav 4
    char str1[255];

    cout << "Enter str: "; cin.getline(str1, 255);
    int len = str_length(str1);
    cout << "String length: " << len << endl;
}
