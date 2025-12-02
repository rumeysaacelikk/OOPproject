#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
protected:
    double amount;

public:
    Payment(double amount = 0.0);
    virtual ~Payment() {}

    double getAmount() const;
    void setAmount(double amount);

    virtual void performPayment() = 0;,

};
#endif
