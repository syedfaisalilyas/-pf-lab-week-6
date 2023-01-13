#include <iostream>
using namespace std;
float chechCost(string, string, int);

main()
{
    string city, product;
    int quantity;
    cout << "Enter the city:";
    cin >> city;
    cout << "Enter the product:";
    cin >> product;
    cout << "Enter the quantity:";
    cin >> quantity;
    float cost = chechCost(product, city, quantity);
    cout << cost;
}

float chechCost(string product, string city, int quantity)
{
    float cost;
    if (product == "coffee")
    {
        if (city == "sofia")
        {
            return cost = quantity * 0.50;
        }
        if (city == "plovdiv")
        {
            return cost = quantity * 0.40;
        }
        if (city == "varna")
        {
            return cost = quantity * 0.45;
        }
    }
    else if (product == "water")
    {
        if (city == "sofia")
        {
            return cost = quantity * 0.80;
        }
        if (city == "plovdiv")
        {
            return cost = quantity * 0.70;
        }
        if (city == "varna")
        {
            return cost = quantity * 0.70;
        }
    }
    else if (product == "beer")
    {
        if (city == "sofia")
        {
            return cost = quantity * 1.20;
        }
        if (city == "plovdiv")
        {
            return cost = quantity * 1.15;
        }
        if (city == "varna")
        {
            return cost = quantity * 1.10;
        }
    }
    else if (product == "sweeets")
    {
        if (city == "sofia")
        {
            return cost = quantity * 1.45;
        }
        if (city == "plovdiv")
        {
            return cost = quantity * 1.30;
        }
        if (city == "varna")
        {
            return cost = quantity * 1.35;
        }
    }
    else if (product == "peanut")
    {
        if (city == "sofia")
        {
            return cost = quantity * 1.60;
        }
        if (city == "plovdiv")
        {
            return cost = quantity * 1.50;
        }
        if (city == "varna")
        {
            return cost = quantity * 1.55;
        }
    }
    return cost;
}