#include <iostream>

#include "01_Movie.cpp"
#include "02_Seat.cpp"
#include "03_Screen.cpp"
#include "04_Cinema.cpp"
#include "05_Show.cpp"
#include "06_ShowSeat.cpp"
#include "07_Customer.cpp"
#include "08_Booking.cpp"
#include "09_Payment.cpp"
#include "10_PaymentTypes.cpp"
#include "11_PriceCalculator.cpp"
#include "12_TicketPrinter.cpp"
#include "13_BookingService.cpp"

using namespace std;

int main()
{
    Movie movies[5] =
    {
        Movie(1, "Stree 3", "Hindi", 150),
        Movie(2, "War 2", "Hindi", 170),
        Movie(3, "Kantara Chapter 1", "Kannada", 165),
        Movie(4, "Coolie", "Tamil", 180),
        Movie(5, "Avengers: Endgame", "English", 181)
    };

    string timings[4] =
    {
        "10:00 AM",
        "1:30 PM",
        "4:30 PM",
        "7:30 PM"
    };

    Customer customer(101, "Karan Kumar", "9876543210");
    BookingService bookingService;
    TicketPrinter printer;

    int choice;

    do
    {
        cout << "\n==========================================";
        cout << "\n      MOVIE TICKET BOOKING SYSTEM";
        cout << "\n==========================================";

        cout << "\n1. View Movies";
        cout << "\n2. Book Ticket";
        cout << "\n3. Cancel Booking";
        cout << "\n4. Exit";

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "\n------ NOW SHOWING ------\n";

            for (int i = 0; i < 5; i++)
            {
                cout << "\nMovie " << i + 1 << endl;
                movies[i].displayMovie();
            }

            break;

        case 2:
        {
            int movieChoice;

            cout << "\nSelect Movie\n";

            for (int i = 0; i < 5; i++)
                cout << i + 1 << ". " << movies[i].getTitle() << endl;

            cout << "Enter Movie Number : ";
            cin >> movieChoice;

            if (movieChoice < 1 || movieChoice > 5)
            {
                cout << "Invalid Movie!\n";
                break;
            }

            int timeChoice;

            cout << "\nSelect Show Timing\n";

            for (int i = 0; i < 4; i++)
                cout << i + 1 << ". " << timings[i] << endl;

            cout << "Enter Timing Choice : ";
            cin >> timeChoice;

            if (timeChoice < 1 || timeChoice > 4)
            {
                cout << "Invalid Timing!\n";
                break;
            }

            bookingService.showSeats();

            string seat = bookingService.bookSeat();

            double amount = bookingService.calculateAmount();

            int paymentChoice;

            cout << "\nChoose Payment Method";
            cout << "\n1. UPI";
            cout << "\n2. Card";
            cout << "\n3. Cash";

            cout << "\nEnter Choice : ";
            cin >> paymentChoice;

            string paymentMode;

            if (paymentChoice == 1)
            {
                UpiPayment upi;
                upi.pay(amount);
                paymentMode = "UPI";
            }
            else if (paymentChoice == 2)
            {
                CardPayment card;
                card.pay(amount);
                paymentMode = "Card";
            }
            else
            {
                CashPayment cash;
                cash.pay(amount);
                paymentMode = "Cash";
            }

            printer.printTicket(
                customer.getName(),
                movies[movieChoice - 1].getTitle(),
                timings[timeChoice - 1],
                seat,
                amount,
                paymentMode);

            break;
        }

        case 3:
            bookingService.cancelBooking();
            break;

        case 4:
            cout << "\nThank You! Visit Again \n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
