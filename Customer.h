#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;

class Customer {
public:
    Customer(int id, double bonus, string name, string username, string password);
    void setId(int id);
    int getId() const;

    void setBonus(double bonus);
    double getBonus() const;

    void setName(const string& name);
    string getName() const;

    void setUsername(const string& username);
    string getUsername() const;

    void setPassword(const string& password);
    string getPassword() const;

    void addPurchase(double amount);
    void useBonus(double amount);

protected:
    int id;
    double bonus;
    string name;
    string username;
    string password;

}; 

#endif
