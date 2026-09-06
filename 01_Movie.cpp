#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
    int movieId;
    string title;
    string language;
    int duration;

public:
    Movie() {}

    Movie(int id, string t, string lang, int dur)
    {
        movieId = id;
        title = t;
        language = lang;
        duration = dur;
    }

    int getMovieId()
    {
        return movieId;
    }

    string getTitle()
    {
        return title;
    }

    string getLanguage()
    {
        return language;
    }

    int getDuration()
    {
        return duration;
    }

    void displayMovie()
    {
        cout << "\nMovie ID : " << movieId;
        cout << "\nTitle    : " << title;
        cout << "\nLanguage : " << language;
        cout << "\nDuration : " << duration << " mins\n";
    }
};