#include "Address.h"

Address::Address() : street("Unknown"), city("Unknown"), state("Unknown"), country("Unknown"), zipCode(0) {}

Address::Address(string st, string c, string s, string co, int zip) 
    : street(st), city(c), state(s), country(co), zipCode(zip) {}

string Address::getStreet() const { return street; }
string Address::getCity() const { return city; }
string Address::getState() const { return state; }
string Address::getCountry() const { return country; }
int Address::getZipCode() const { return zipCode; }

void Address::setAddress(string st, string c, string s, string co, int zip) {
    street = st;
    city = c;
    state = s;
    country = co;
    zipCode = zip;
}

void Address::printAddress() const {
    cout << street << ", " << city << ", " << state << ", " << country << " - " << zipCode << endl;
}
