#include <iostream>
#include <string>
using namespace std;

enum SeatStatus
{
    AVAILABLE,
    BOOKED
};

class ShowSeat
{
private:
    string seatNumber;
    SeatStatus status;

public:
    ShowSeat() {}

    ShowSeat(string num)
    {
        seatNumber = num;
        status = AVAILABLE;
    }

    bool isAvailable()
    {
        return status == AVAILABLE;
    }

    void bookSeat()
    {
        status = BOOKED;
    }

    void cancelSeat()
    {
        status = AVAILABLE;
    }

    string getSeatNumber()
    {
        return seatNumber;
    }

    SeatStatus getStatus()
    {
        return status;
    }
};