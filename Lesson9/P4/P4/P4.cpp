// Problem #44: Day Of Week.
#include <iostream>
using namespace std;
enum En_Num_Of_Days { Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat };
int Read_Num(string message) {
    int num;
    cout << message;
    cin >> num;
    return num;
}
En_Num_Of_Days Number_Of_Day() {
    return (En_Num_Of_Days)Read_Num("Please, enter the number of the day: ");
}
string Print_Day(En_Num_Of_Days number_of_day) {
    switch (number_of_day)
    {
    case En_Num_Of_Days::Sun:
        return "Sunday.";
    case En_Num_Of_Days::Mon:
        return "Monday.";
    case En_Num_Of_Days::Tue:
        return "Tuesday.";
    case En_Num_Of_Days::Wed:
        return "Wednesday.";
    case En_Num_Of_Days::Thu:
        return "Thursday.";
    case En_Num_Of_Days::Fri:
        return "Friday.";
    case En_Num_Of_Days::Sat:
        return "Saturday.";
    default:
        return "Not a valid day.";
    }
}
int main()
{
    cout << "***************************************************\n";
    cout << "Enter:\n1 to print Sunday." << endl;
    cout << "or 2 to print Monday." << endl;
    cout << "or 3 to print Tuesday." << endl;
    cout << "or 4 to print Wednesday." << endl;
    cout << "or 5 to print Thursday." << endl;
    cout << "or 6 to print Friday." << endl;
    cout << "or 7 to print Saturday." << endl;
    cout << "or any another number to print \"Not a valid day\"." << endl;
    cout << "***************************************************\n";
    cout << Print_Day(Number_Of_Day());
    return 0;
}