#include <iostream>
using namespace std;

class TicketPrinter
{
public:
    void printTicket(string customerName,
                     string movieName,
                     string showTime,
                     string seat,
                     double amount,
                     string paymentMode)
    {
        cout << "\n======================================";
        cout << "\n         MOVIE TICKET";
        cout << "\n======================================";
        cout << "\nCustomer : " << customerName;
        cout << "\nMovie    : " << movieName;
        cout << "\nShow Time: " << showTime;
        cout << "\nSeat     : " << seat;
        cout << "\nAmount   : Rs. " << amount;
        cout << "\nPayment  : " << paymentMode;
        cout << "\n======================================";
        cout << "\n     Enjoy Your Movie!";
        cout << "\n======================================\n";
    }
};