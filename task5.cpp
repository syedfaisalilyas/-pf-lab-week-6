#include <iostream>
using namespace std;
string checkSpeed(float);
main()
{
    float speed;
    cout << "Enter your speed:";
    cin >> speed;
    string title = checkSpeed(speed);
    cout << title;
}

string checkSpeed(float speed)
{
    string title;
    if (speed <= 10)
    {
        return title = "Slow";
    }
    else if (speed > 10 && speed <= 50)
    {
        return title = "Average";
    }
    else if (speed > 50 && speed <= 150)
    {
        return title = "Fast";
    }
    else if (speed > 150 && speed <= 1000)
    {
        return title = "Ultra fast";
    }
    else
    {
        return "Extremely_fast";
    }
    return title;
}
