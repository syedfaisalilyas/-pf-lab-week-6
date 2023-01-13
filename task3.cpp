#include <iostream>
using namespace std;
float Amount(int amount, string day, string month);

main()
{
    string day, month;
    int amount;
    cout << "Enter day:";
    cin >> day;
    cout << "Enter month:";
    cin >> month;
    cout << "Enter amount:";
    cin >> amount;

    float payable_amount = Amount(amount, day, month);
    cout << payable_amount;
}

float Amount(int amount, string day, string month)
{
    float dis1 = (5 * amount) / 100;
    float dis2 = (10 * amount) / 100;
    float payable_amount = amount;
    if (day == "Sunday")
    {
        if (month == "October" || month == "March" || month == "August")
        {
            return payable_amount = amount - dis2;
        }
    }
    else if (day == "Monday")
    {
        if (month == "November" || month == "December")
        {
            return payable_amount = amount - dis1;
        }
    }

    return payable_amount;
}