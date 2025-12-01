#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Payment.h" 
#include <string>

using namespace std;

class CreditCard : public Payment {
private:
    long long number;
    string type;     
    string expDate;  

public:
    CreditCard(double amount, long long number, string type, string expDate);

    void performPayment() override;

    long long getNumber() const;
    void setNumber(long long number);

    string getType() const;
    void setType(const string& type);

    string getExpDate() const;
    void setExpDate(const string& expDate);
};

#endif
