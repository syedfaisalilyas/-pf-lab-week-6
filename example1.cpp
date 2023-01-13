#include <iostream>
using namespace std;
main()
{
    int Roll_no;
    string name;
    cout << "Enter Name:";
    cin >> name;
    cout << "Enter Roll Number:";
    cin >> Roll_no;
    if (Roll_no == 501 && name == "Ali")
    {
        cout << "Congratulations Ali!" << endl;
    }
    else
    {
        cout << "Sorry!";
    }
}