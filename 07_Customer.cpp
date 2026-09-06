#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    int customerId;
    string name;
    string phone;

public:
    Customer() {}

    Customer(int id, string n, string p)
    {
        customerId = id;
        name = n;
        phone = p;
    }

    int getCustomerId()
    {
        return customerId;
    }

    string getName()
    {
        return name;
    }

    string getPhone()
    {
        return phone;
    }

    void displayCustomer()
    {
        cout << "\nCustomer ID : " << customerId;
        cout << "\nName        : " << name;
        cout << "\nPhone       : " << phone << endl;
    }
};