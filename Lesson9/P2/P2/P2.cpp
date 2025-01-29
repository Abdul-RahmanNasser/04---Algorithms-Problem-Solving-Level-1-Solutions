// Problem #42: Task Duration In Seconds.
#include <iostream>
using namespace std;
struct Str_Task_Duration {
    int Seconds, Minutes, Hours, Days;
};
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
Str_Task_Duration Task_Duration() {
    Str_Task_Duration task_duration;
    task_duration.Seconds = Read_Num("Please, enter number of seconds: ");
    task_duration.Minutes = Read_Num("Please, enter number of minutes: ");
    task_duration.Hours = Read_Num("Please, enter number of hours: ");
    task_duration.Days = Read_Num("Please, enter number of days: ");
    return task_duration;
}
int Task_Duration_In_Seconds(Str_Task_Duration task_duration) {
    int task_duration_in_seconds = 0;
    task_duration_in_seconds += task_duration.Days * 24 * 60 * 60;
    task_duration_in_seconds += task_duration.Hours * 60 * 60;
    task_duration_in_seconds += task_duration.Minutes * 60;
    task_duration_in_seconds += task_duration.Seconds;
    return task_duration_in_seconds;
}
int main()
{
    cout << "Task Duration In Seconds = " << Task_Duration_In_Seconds(Task_Duration()) << " seconds.\n";
    return 0;
}