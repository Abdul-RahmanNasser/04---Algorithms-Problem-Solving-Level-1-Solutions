// Problem #25: Read Until Age Between 18 and 45.
#include <iostream>
using namespace std;
short Read_Age() {
    short age;
    cout << "Please, enter your age: ";
    cin >> age;
    return age;
}
bool Check_Age(short age, short from, short to) {
    return age <= to && age >= from;
}
short Read_Untill_Valid_Age(short from, short to) {
    short age;
    do {
        age = Read_Age();
    } while (!Check_Age(age, 18, 45));
    return age;
}
void Print_Age(short age) {
    cout << "Your agea is " << age << " years old.\n";
}
int main() {
    Print_Age(Read_Untill_Valid_Age(18, 45));
    return 0;
}