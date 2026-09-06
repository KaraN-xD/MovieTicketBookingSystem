#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class BookingService
{
private:
    vector<string> bookedSeats;

public:
    string selectedSeat;
    string seatCategory;
    double totalAmount;

    BookingService()
    {
        totalAmount = 0;
    }

    void showSeats()
    {
        cout << "\n=========== SEAT LAYOUT ===========\n\n";

        cout << "PLATINUM (Rs.300)\n";
        cout << "P1  P2  P3  P4\n\n";

        cout << "GOLD (Rs.250)\n";
        cout << "G1  G2  G3  G4\n\n";

        cout << "SILVER (Rs.180)\n";
        cout << "S1  S2  S3  S4\n";
    }

    string bookSeat()
    {
        while (true)
        {
            cout << "\nEnter Seat Number: ";
            cin >> selectedSeat;

            transform(selectedSeat.begin(), selectedSeat.end(),
                      selectedSeat.begin(), ::toupper);

            vector<string> validSeats = {
                "P1","P2","P3","P4",
                "G1","G2","G3","G4",
                "S1","S2","S3","S4"
            };

            bool valid = false;

            for (string s : validSeats)
            {
                if (selectedSeat == s)
                {
                    valid = true;
                    break;
                }
            }

            if (!valid)
            {
                cout << "❌ Invalid Seat! Try Again.\n";
                continue;
            }

            if (find(bookedSeats.begin(), bookedSeats.end(), selectedSeat)
                != bookedSeats.end())
            {
                cout << "❌ Seat Already Booked!\n";
                continue;
            }

            bookedSeats.push_back(selectedSeat);

            cout << "✅ Seat " << selectedSeat << " booked successfully.\n";
            return selectedSeat;
        }
    }

    double calculateAmount()
    {
        if (selectedSeat[0] == 'P')
        {
            seatCategory = "Platinum";
            totalAmount = 300;
        }
        else if (selectedSeat[0] == 'G')
        {
            seatCategory = "Gold";
            totalAmount = 250;
        }
        else
        {
            seatCategory = "Silver";
            totalAmount = 180;
        }

        cout << "\nSeat Category : " << seatCategory;
        cout << "\nTicket Price  : Rs." << totalAmount << endl;

        return totalAmount;
    }

    string getSeatCategory()
    {
        return seatCategory;
    }

    void cancelBooking()
    {
        if (bookedSeats.empty())
        {
            cout << "\nNo Booking Found.\n";
            return;
        }

        string seat;

        cout << "\nEnter Seat Number to Cancel: ";
        cin >> seat;

        transform(seat.begin(), seat.end(), seat.begin(), ::toupper);

        auto it = find(bookedSeats.begin(), bookedSeats.end(), seat);

        if (it != bookedSeats.end())
        {
            bookedSeats.erase(it);
            cout << "✅ Booking Cancelled for Seat " << seat << endl;
        }
        else
        {
            cout << "❌ Seat Not Found.\n";
        }
    }
};