#include "Guest.h"

Guest::Guest() : firstName("Unknown"), lastName("Unknown"), email("Unknown"), phone("Unknown"), address() {}

Guest::Guest(string fName, string lName, string mail, string ph, Address addr)
    : firstName(fName), lastName(lName), email(mail), phone(ph), address(addr) {}

string Guest::getFirstName() const { return firstName; }
string Guest::getLastName() const { return lastName; }
string Guest::getEmail() const { return email; }
string Guest::getPhone() const { return phone; }
Address Guest::getAddress() const { return address; }

void Guest::setGuest(string fName, string lName, string mail, string ph, Address addr) {
    firstName = fName;
    lastName = lName;
    email = mail;
    phone = ph;
    address = addr;
}

void Guest::printGuestInfo() const {
    cout << "Guest Name: " << firstName << " " << lastName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Address: ";
    address.printAddress();
}
