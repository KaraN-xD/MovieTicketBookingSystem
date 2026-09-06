#include <iostream>
using namespace std;

class Payment
{
protected:
    double amount;

public:
    Payment()
    {
        amount = 0;
    }

    virtual bool pay(double amt) = 0;
};