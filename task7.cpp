#include <iostream>
using namespace std;
float LowestPrice(string, int);
main()
{
    string day_type;
    int n_km;
    cout << "Enter day or night:";
    cin >> day_type;
    cout << "Enter the number of kilometers:";
    cin >> n_km;

    float income = LowestPrice(day_type, n_km);
    cout << "The cheapest price is:" << income;
}

float LowestPrice(string day_type, int n_km)
{
    float income;
    if (n_km >= 20 && n_km < 100)
    {
        if (day_type == "day" || day_type == "night")
        {
            return income = 0.09 * n_km;
        }
    }
    else if (n_km >= 100)
    {
        if (day_type == "day" || day_type == "night")
        {
            return income = 0.06 * n_km;
        }
    }
    else
    {
        if ((day_type == "day"))
        {

            return income = 0.79 * n_km + 0.70;
        }
        if ((day_type == "night"))
        {

            return income = 0.90 * n_km + 0.70;
        }
    }

    return income;
}