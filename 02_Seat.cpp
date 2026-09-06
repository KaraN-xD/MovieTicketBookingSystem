#include <iostream>
#include <string>
using namespace std;

enum SeatType
{
    SILVER,
    GOLD,
    PLATINUM
};

class Seat
{
private:
    string seatNumber;
    SeatType seatType;

public:
    Seat() {}

    Seat(string num, SeatType type)
    {
        seatNumber = num;
        seatType = type;
    }

    string getSeatNumber()
    {
        return seatNumber;
    }

    SeatType getSeatType()
    {
        return seatType;
    }

    int getPrice()
    {
        if (seatType == PLATINUM)
            return 300;      // Platinum price
        else if (seatType == GOLD)
            return 250;      // Gold price
        else
            return 180;      // Silver price
    }

    void displaySeat()
    {
        cout << seatNumber << " (";

        if (seatType == PLATINUM)
            cout << "Platinum";
        else if (seatType == GOLD)
            cout << "Gold";
        else
            cout << "Silver";

        cout << ")";
    }
};