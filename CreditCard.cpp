#include "CreditCard.h"
#include <iostream>

using namespace std;

CreditCard::CreditCard(double amount, long long number, string type, string expDate)
    : Payment(amount) {
    this->number = number;
    this->type = type;
    this->expDate = expDate;
}

void CreditCard::performPayment() {
    cout << "---------------------------------" << endl;
    cout << "Kredi Karti ile Odeme Yapiliyor..." << endl;
    cout << "Tutar: " << amount << " TL" << endl; 
    cout << "Kart No: " << number << endl;
    cout << "Kart Tipi: " << type << endl;
    cout << "Son Kullanma: " << expDate << endl;
    cout << "Odeme Onaylandi." << endl;
    cout << "---------------------------------" << endl;
}

long long CreditCard::getNumber() const {
    return number;
}

void CreditCard::setNumber(long long number) {
    this->number = number;
}

string CreditCard::getType() const {
    return type;
}

void CreditCard::setType(const string& type) {
    this->type = type;
}

string CreditCard::getExpDate() const {
    return expDate;
}

void CreditCard::setExpDate(const string& expDate) {
    this->expDate = expDate;
}
