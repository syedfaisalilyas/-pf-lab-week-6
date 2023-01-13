
#include <iostream>
using namespace std;
int isGreater(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    cout << "Enter number1:";
    cin >> num1;
    cout << "Enter number2:";
    cin >> num2;
    cout << "Enter number3:";
    cin >> num3;
    int result = isGreater(num1, num2, num3);
    cout << result << " is the greatest number!";
}

int isGreater(int num1, int num2, int num3)
{
    int greatest = num1;
    if (num1 > num2 && num1 > num3)
    {
        greatest = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        greatest = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        greatest = num3;
    }
    else
    {
        greatest == num3;
    }

    return greatest;
}