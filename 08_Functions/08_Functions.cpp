#include <iostream>
using namespace std;

void Date—omparison(int dd, int mm, int yy, int dd2, int mm2, int yy2)
{

    // DATE 1

    int days_in_year = 365;
    int days_in_leap_year = 366;
    int year_days = 1;
    int month_days = 1;
    int total_days = 1;

    year_days == yy * days_in_year;
    switch (mm) {
    case 1:
        month_days = 31;
        break;
    case 2:
        month_days = 31 + 29;
        break;
    case 3:
        month_days = 31 + 29 + 31;
        break;
    case 4:
        month_days = 31 + 29 + 31 + 30;
        break;
    case 5:
        month_days = 31 + 29 + 31 + 30 + 31;
        break;
    case 6: 
        month_days = 31 + 29 + 31 + 30 + 31 + 30;
        break;
    case 7:
        month_days = 31 + 29 + 31 + 30 +31 + 30 + 31;
        break;
    case 8:
        month_days = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
        break;
    case 9:
        month_days = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        break;
    case 10:
        month_days = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break;
    case 11:
        month_days = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break;
    case 12:
        month_days = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
        break;
    default:
        cout << "no month found" << endl;
    }

    total_days = year_days + month_days + dd;

    // DATE 2

    int year_days_2 = 1;
    int month_days_2 = 1;
    int total_days_2 = 1;

    year_days_2 == yy2 * days_in_year;
    switch (mm2) {
    case 1:
        month_days_2 = 31;
        break;
    case 2:
        month_days_2 = 31 + 29;
        break;
    case 3:
        month_days_2 = 31 + 29 + 31;
        break;
    case 4:
        month_days_2 = 31 + 29 + 31 + 30;
        break;
    case 5:
        month_days_2 = 31 + 29 + 31 + 30 + 31;
        break;
    case 6:
        month_days_2 = 31 + 29 + 31 + 30 + 31 + 30;
        break;
    case 7:
        month_days_2 = 31 + 29 + 31 + 30 + 31 + 30 + 31;
        break;
    case 8:
        month_days_2 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
        break;
    case 9:
        month_days_2 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        break;
    case 10:
        month_days_2 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break;
    case 11:
        month_days_2 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break;
    case 12:
        month_days_2 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
        break;
    default:
        cout << "no month found" << endl;
    }

    total_days_2 = year_days_2 + month_days_2 + dd2;
    int Date_Comparison = total_days - total_days_2;

    // OUT

    cout << "Date 1: " << dd << "/" << mm << "/" << yy << endl;
    cout << "Date 2: " << dd2 << "/" << mm2 << "/" << yy2 << endl;
    cout << "Date comparison in days: " << Date_Comparison << endl;
}

int main() {

    int days;
    int months;
    int years;
    int days2;
    int months2;
    int years2;

    cout << " DATE 1" << endl;
    cout << "1 | DD: ";
    cin >> days;
    cout << "1 | MM: ";
    cin >> months;
    cout << "1 | YY: ";
    cin >> years;
    cout << " DATE 2" << endl;
    cout << "2 | DD: ";
    cin >> days2;
    cout << "2 | MM: ";
    cin >> months2;
    cout << "2 | YY: ";
    cin >> years2;

    Date—omparison(days, months, years, days2, months2, years2);
}