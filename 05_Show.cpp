#include <iostream>
#include <string>
using namespace std;

class Show
{
private:
    int showId;
    int movieId;
    int screenId;
    string showTime;

public:
    Show() {}

    Show(int sid, int mid, int scr, string time)
    {
        showId = sid;
        movieId = mid;
        screenId = scr;
        showTime = time;
    }

    int getShowId()
    {
        return showId;
    }

    int getMovieId()
    {
        return movieId;
    }

    int getScreenId()
    {
        return screenId;
    }

    string getShowTime()
    {
        return showTime;
    }

    void displayShow()
    {
        cout << "\nShow ID : " << showId;
        cout << "\nScreen  : " << screenId;
        cout << "\nTime    : " << showTime << endl;
    }
};