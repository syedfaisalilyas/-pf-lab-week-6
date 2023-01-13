#include <iostream>
using namespace std;
double calculateprice(float, string, int);
main()
{
    float budget;
    string category;
    int number;
    cout << "Enter Budget:";
    cin >> budget;
    cout << "Enter category:";
    cin >> category;
    cout << "Enter number of people:";
    cin >> number;
    double price = calculateprice(budget, category, number);
    cout << price;
    bool tf = calculateprice(budget, category, number);
    if (tf == true)
    {
        cout << "Yes! You have " << price << "QR left";
    }
    if (tf == false)
    {
        cout << "Not enough money! You need " << price << "QR ";
    }
}

double calculateprice(float budget, string category, int number)
{
    float price;
    float ticket_p, price_left, trans_p, total_p;
    float cost_after_trans;
    float p_VIP = 499.99;
    float P_NORMAL = 249.99;
    bool tf;

    if (number <= 1 && number >= 4)
    {
        trans_p = ((75 * budget) / 100);
        cost_after_trans = budget - trans_p;
        if (category == "VIP")
        {
            ticket_p = p_VIP * number;
        }
        else if (category == "Normal")
        {
            ticket_p = P_NORMAL * number;
        }
        total_p = trans_p + ticket_p;
        if (total_p < budget)
        {
            price_left = cost_after_trans - ticket_p;
            return tf = true;
        }
        else
        {
            price_left = total_p - budget;
            return tf = false;
        }

        price = price_left;
    }

    if (number >= 5 && number <= 9)
    {
        trans_p = ((60 * budget) / 100);
        cost_after_trans = budget - trans_p;
        if (category == "VIP")
        {
            ticket_p = p_VIP * number;
        }
        else if (category == "Normal")
        {
            ticket_p = P_NORMAL * number;
        }
        total_p = trans_p + ticket_p;
        if (total_p < budget)
        {
            return tf = true;
            price_left = cost_after_trans - ticket_p;
        }

        if (total_p > budget)
        {
            return tf = false;
            price_left = total_p - budget;
        }

        price = price_left;
    }
    if (number >= 10 && number <= 24)
    {
        trans_p = ((50 * budget) / 100);
        cost_after_trans = budget - trans_p;
        if (category == "VIP")
        {
            ticket_p = p_VIP * number;
        }
        else if (category == "Normal")
        {
            ticket_p = P_NORMAL * number;
        }
        total_p = trans_p + ticket_p;
        if (total_p < budget)
        {
            return tf = true;
            price_left = cost_after_trans - ticket_p;
        }

        if (total_p > budget)
        {
            return tf = false;
            price_left = total_p - budget;
        }

        price = price_left;
    }
    if (number >= 25 && number <= 49)
    {
        trans_p = ((40 * budget) / 100);
        cost_after_trans = budget - trans_p;
        if (category == "VIP")
        {
            ticket_p = p_VIP * number;
        }
        else if (category == "Normal")
        {
            ticket_p = P_NORMAL * number;
        }
        total_p = trans_p + ticket_p;
        if (total_p < budget)
        {
            return tf = true;
            price_left = cost_after_trans - ticket_p;
        }

        if (total_p > budget)
        {
            return tf = false;
            price_left = total_p - budget;
        }

        price = price_left;
    }
    if (number >= 50)
    {
        trans_p = ((25 * budget) / 100);
        cost_after_trans = budget - trans_p;
        if (category == "VIP")
        {
            ticket_p = p_VIP * number;
        }
        else if (category == "Normal")
        {
            ticket_p = P_NORMAL * number;
        }
        total_p = trans_p + ticket_p;
        if (total_p < budget)
        {
            return tf = true;
            price_left = cost_after_trans - ticket_p;
        }

        if (total_p > budget)
        {
            return tf = false;
            price_left = total_p - budget;
        }

        price = price_left;
    }
    return price;
}