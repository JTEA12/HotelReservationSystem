#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructors
    Date();
    Date(int d, int m, int y);

    // Getters
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Setters
    void setDate(int d, int m, int y);

    // Display date
    void printDate() const;

    // Comparison Operators (Useful for reservation sorting)
    bool operator<(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator==(const Date& other) const;
};

#endif // DATE_H
