#include <iostream>
using namespace std;
int nHolidays(string year, int holidays, int weekends);
main()
{
    string year;
    int holidays;
    int weekends;
    cout << "Enter the year either leap or normal:";
    cin >> year;
    cout << "Enter the number of holidays in the year:";
    cin >> holidays;
    cout << "Enter the number of weeekeneds in which viladmir travels to his hometo:";
    cin >> weekends;
    int result = nHolidays(year, holidays, weekends);
    cout << result;
}

int nHolidays(string year, int holidays, int weekends)
{
    int result;
    int free_weekends = 36;
    float playing_holidays = (2 * holidays) / 3;
    if (year == "normal")
    {
        result = free_weekends + playing_holidays;
    }
    if (year == "leap")
    {
        int result1 = free_weekends + playing_holidays;
        float extra_for_leap = (15 * result1) / 100;
        result = extra_for_leap + result1;
    }
    return result;
}