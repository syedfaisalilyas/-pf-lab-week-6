#include <iostream>
using namespace std;
string checkTitle(int, char);
main()
{
    float age;
    char gender;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your gender either m or f:";
    cin >> gender;
    string title = checkTitle(age, gender);
    cout << title;
}

string checkTitle(int age, char gender)
{
    string title;
    if (age >= 16 && gender == 'm')
    {
        return title = "Mr.";
    }
    if (age < 16 && gender == 'm')
    {
        return title = "Master";
    }
    if (age >= 16 && gender == 'w')
    {
        return title = "Ms.";
    }
    if (age < 16 && gender == 'w')
    {
        return title = "Miss";
    }
    return title;
}