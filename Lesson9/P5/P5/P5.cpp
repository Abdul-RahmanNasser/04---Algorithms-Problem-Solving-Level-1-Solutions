// Problem #45: Month Of Year.
#include <iostream>
using namespace std;
enum En_Number_Of_Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
int Read_Num(string message, int from, int to) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num<from || num>to);
    return num;
}
En_Number_Of_Month Read_Number_Of_Month() {
    return (En_Number_Of_Month)Read_Num("Please, enter number of the month (from 1 to 12): ", 1, 12);
}
string Print_Month(En_Number_Of_Month number_Of_month) {
    switch (number_Of_month) {
    case En_Number_Of_Month::Jan:
        return "January.";
    case En_Number_Of_Month::Feb:
        return "February.";
    case En_Number_Of_Month::Mar:
        return "March.";
    case En_Number_Of_Month::Apr:
        return "April.";
    case En_Number_Of_Month::May:
        return "May.";
    case En_Number_Of_Month::Jun:
        return "June.";
    case En_Number_Of_Month::Jul:
        return "July.";
    case En_Number_Of_Month::Aug:
        return "August.";
    case En_Number_Of_Month::Sep:
        return "September.";
    case En_Number_Of_Month::Oct:
        return "October.";
    case En_Number_Of_Month::Nov:
        return "November.";
    case En_Number_Of_Month::Dec:
        return "December.";
    default:
        return "Not a valid number.";
    }
}
int main()
{
    cout << Print_Month(Read_Number_Of_Month());
    return 0;
}