#include <iostream>
using namespace std;
char Grade(int marks);

main()
{
    int marks;
    cout << "Enter marks:";
    cin >> marks;
    char grade = Grade(marks);
    cout << "Your grade is " << grade;
}

char Grade(int marks)
{
    char grade;
    if (marks >= 0 && marks < 50)
    {
        return grade = 'F';
    }
    else if (marks >= 50 && marks <= 60)
    {
        return grade = 'E';
    }
    else if (marks > 60 && marks <= 70)
    {
        return grade = 'D';
    }
    else if (marks > 70 && marks <= 80)
    {
        return grade = 'C';
    }
    else if (marks > 80 && marks <= 85)
    {
        return grade = 'B';
    }
    else if (marks > 85)
    {
        return grade = 'A';
    }

    return grade;
}