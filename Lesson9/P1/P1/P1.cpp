// Problem #41: Weeks and Days.
#include <iostream>
using namespace std;
int Read_Number_Of_Hours(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
float Number_Of_Days(int Number_Of_Hours) {
    return (float)Number_Of_Hours / 24;
}
float Number_Of_Weeks(float Number_Of_Days) {
    return Number_Of_Days / 7;
}
int main()
{
    int Hours = Read_Number_Of_Hours("Please, enter the number of hours: ");
    float Days = Number_Of_Days(Hours);
    float Weeks = Number_Of_Weeks(Days);
    cout << "The number of hours = " << Hours << " hours.\n";
    cout << "The number of days = " << Days << " days.\n";
    cout << "The number of weeks = " << Weeks << " weeks.\n";
    return 0;
}