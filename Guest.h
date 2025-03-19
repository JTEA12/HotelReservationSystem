#ifndef GUEST_H
#define GUEST_H

#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

class Guest {
private:
    string firstName, lastName, email, phone;
    Address address;

public:
    // Constructors
    Guest();
    Guest(string fName, string lName, string mail, string ph, Address addr);

    // Getters
    string getFirstName() const;
    string getLastName() const;
    string getEmail() const;
    string getPhone() const;
    Address getAddress() const;

    // Setters
    void setGuest(string fName, string lName, string mail, string ph, Address addr);

    // Display Guest Info
    void printGuestInfo() const;
};

#endif // GUEST_H
