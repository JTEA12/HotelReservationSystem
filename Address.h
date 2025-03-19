#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

using namespace std;

class Address {
private:
    string street, city, state, country;
    int zipCode;

public:
    // Constructors
    Address();
    Address(string st, string c, string s, string co, int zip);

    // Getters
    string getStreet() const;
    string getCity() const;
    string getState() const;
    string getCountry() const;
    int getZipCode() const;

    // Setters
    void setAddress(string st, string c, string s, string co, int zip);

    // Print Address
    void printAddress() const;
};

#endif // ADDRESS_H
