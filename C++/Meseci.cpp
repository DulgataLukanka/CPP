#include <iostream>
using namespace std;

int leap(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int days(int month, int year) {
    if (month == 1 ||  month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 28 + leap(year);
}

int main() {
    int day, month, year;
    cin >> day >> month >> year;
    if (day < days(month, year)) cout << day + 1 << ' ' << month << ' ' << year;
    else {
        if (month < 12) {
            cout << 1 << ' ' << month + 1 << ' ' << year;
        } else {
            cout << 1 << ' ' << 1 << ' ' << year + 1;
        }
    }
    return 0;
}
