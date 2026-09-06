#include <iostream>
#include <vector>
using namespace std;

enum BookingStatus
{
    CONFIRMED,
    CANCELLED
};

class Booking
{
private:
    int bookingId;
    int customerId;
    int showId;
    vector<string> bookedSeats;
    double totalAmount;
    BookingStatus status;

public:
    Booking() {}

    Booking(int bid, int cid, int sid)
    {
        bookingId = bid;
        customerId = cid;
        showId = sid;
        totalAmount = 0;
        status = CONFIRMED;
    }

    void addSeat(string seat)
    {
        bookedSeats.push_back(seat);
    }

    void setAmount(double amount)
    {
        totalAmount = amount;
    }

    double getAmount()
    {
        return totalAmount;
    }

    int getBookingId()
    {
        return bookingId;
    }

    void displayBooking()
    {
        cout << "\nBooking ID : " << bookingId;
        cout << "\nCustomer ID: " << customerId;
        cout << "\nShow ID    : " << showId;

        cout << "\nSeats      : ";
        for (string seat : bookedSeats)
            cout << seat << " ";

        cout << "\nTotal      : Rs." << totalAmount << endl;
    }
};