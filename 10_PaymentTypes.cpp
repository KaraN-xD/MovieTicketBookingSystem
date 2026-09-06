#include <iostream>
using namespace std;

class UpiPayment : public Payment
{
public:
    bool pay(double amt)
    {
        cout << "\nUPI Payment Successful!";
        cout << "\nAmount Paid : Rs." << amt << endl;
        return true;
    }
};

class CardPayment : public Payment
{
public:
    bool pay(double amt)
    {
        cout << "\nCard Payment Successful!";
        cout << "\nAmount Paid : Rs." << amt << endl;
        return true;
    }
};

class CashPayment : public Payment
{
public:
    bool pay(double amt)
    {
        cout << "\nCash Payment Successful!";
        cout << "\nAmount Paid : Rs." << amt << endl;
        return true;
    }
};