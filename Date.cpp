#include "Date.h"

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int Date::getDay() const { return day; }
int Date::getMonth() const { return month; }
int Date::getYear() const { return year; }

void Date::setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::printDate() const {
    cout << day << "/" << month << "/" << year << endl;
}

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
