#include "Date.h"
#include <iostream>

using namespace std;

// Default constructor initializes to 1/1/2000
Date::Date() : day(1), month(1), year(2000) {}

// Parameterized constructor
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

// Getters
int Date::getDay() const { return day; }
int Date::getMonth() const { return month; }
int Date::getYear() const { return year; }

// Setters
void Date::setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

// Print date in DD/MM/YYYY format
void Date::printDate() const {
    cout << day << "/" << month << "/" << year << endl;
}

// Comparison Operators
bool Date::operator<(const Date& other) const {
    if (year != other.year) return year < other.year;
    if (month != other.month) return month < other.month;
    return day < other.day;
}

bool Date::operator>(const Date& other) const {
    return !(*this < other) && !(*this == other);
}

bool Date::operator==(const Date& other) const {
    return (day == other.day && month == other.month && year == other.year);
}
