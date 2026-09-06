#include <iostream>
using namespace std;

class PriceCalculator
{
public:
    double calculatePrice(int regularSeats, int premiumSeats)
    {
        return (regularSeats * 180) + (premiumSeats * 250);
    }
};