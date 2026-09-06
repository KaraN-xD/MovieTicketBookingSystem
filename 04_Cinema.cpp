#include <iostream>
#include <vector>
using namespace std;

class Cinema
{
private:
    string cinemaName;
    vector<int> screens;

public:
    Cinema()
    {
        cinemaName = "PVR Dehradun";
        screens = {1,2,3};
    }

    string getCinemaName()
    {
        return cinemaName;
    }

    void displayScreens()
    {
        cout << "\nCinema : " << cinemaName << endl;

        cout << "Available Screens\n";

        for (int screen : screens)
            cout << "Screen " << screen << endl;
    }
};