// Problem #24: Validate Age Between 18 and 45.
#include <iostream>
using namespace std;
short Read_Age() {
    short age;
    cout << "Please, enter your age: ";
    cin >> age;
    return age;
}
bool Check_Age(short age, short from, short to) {
    return age >= from && age <= to;
}
void Print_Age(short age) {
    if (Check_Age(age, 18, 45))
        cout << "Valid Age." << endl;
    else
        cout << "Invalid Age." << endl;
}
int main()
{
    Print_Age(Read_Age());
    return 0;
}