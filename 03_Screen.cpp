#include <iostream>
#include <vector>
using namespace std;

class Screen
{
private:
    int screenId;
    vector<string> seats;

public:
    Screen() {}

    Screen(int id)
    {
        screenId = id;

        seats = {"A1","A2","A3","A4",
                 "B1","B2","B3","B4",
                 "C1","C2","C3","C4"};
    }

    int getScreenId()
    {
        return screenId;
    }

    vector<string> getSeats()
    {
        return seats;
    }

    void displaySeats()
    {
        cout << "\nAvailable Seats\n\n";

        for (int i = 0; i < seats.size(); i++)
        {
            cout << seats[i] << "\t";

            if ((i + 1) % 4 == 0)
                cout << endl;
        }
    }
};