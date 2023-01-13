#include <iostream>
using namespace std;
float totalIncome(string, int, int);
main()
{
    string screen_type;
    int n_row, n_column;
    cout << "Enter the screen type:";
    cin >> screen_type;
    cout << "Enter the number of rows:";
    cin >> n_row;
    cout << "Enter the number of columns:";
    cin >> n_column;
    float income = totalIncome(screen_type, n_row, n_column);
    cout << "The total income is:" << income;
}
float totalIncome(string screen_type, int n_row, int n_column)
{
    float p_premier = 12.00;
    float p_normal = 7.50;
    float p_discount = 5.00;

    float income;
    if (screen_type == "premier")
    {
        return income = n_row * n_column * p_premier;
    }
    else if (screen_type == "normal")
    {
        return income = n_row * n_column * p_normal;
    }
    else if (screen_type == "discount")
    {
        return income = n_row * n_column * p_discount;
    }
    return income;
}