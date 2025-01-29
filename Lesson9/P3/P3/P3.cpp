// Problem #43: Seconds to Days Hours Minutes Seconds.
#include <iostream>
using namespace std;
struct Str_Task_Duration {
    int days, hours, minutes, seconds;
};
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
Str_Task_Duration Seconds_To_Task_Duration(int total_seconds) {
    Str_Task_Duration task_duration;
    const int seconds_per_day = 24 * 60 * 60;
    const int seconds_per_hour = 60 * 60;
    const int seconds_per_minute = 60;
    task_duration.days = total_seconds / seconds_per_day;
    int remainder = total_seconds % seconds_per_day;
    task_duration.hours = remainder / seconds_per_hour;
    remainder = remainder % seconds_per_hour;
    task_duration.minutes = remainder / seconds_per_minute;
    remainder = remainder % seconds_per_minute;
    task_duration.seconds = remainder;
    return task_duration;
}
void Print_Seconds_To_Task_Duration(Str_Task_Duration seconds_to_task_duration) {
    cout << seconds_to_task_duration.days << ":"
    << seconds_to_task_duration.hours << ":"
    << seconds_to_task_duration.minutes << ":"
    << seconds_to_task_duration.seconds << endl;
}
int main()
{
    int total_seconds = Read_Num("Please, enter the total seconds: ");
    Print_Seconds_To_Task_Duration(Seconds_To_Task_Duration(total_seconds));
    return 0;
}