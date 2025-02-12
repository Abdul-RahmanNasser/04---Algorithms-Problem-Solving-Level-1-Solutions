// Problem #49: ATM PIN.
#include <iostream>
using namespace std;
string Read_PIN_Code() {
    string PIN_Code;
    cout << "Please, enter PIN code: ";
    cin >> PIN_Code;
    return PIN_Code;
}
bool LogIn() {
    string PIN_Code;
    do {
        PIN_Code = Read_PIN_Code();
        if (PIN_Code == "1234")
            return 1;
        else {
            cout << "\nWrong Code\n";
            system("color 4F");
        }
    } while (PIN_Code != "1234");
}
int main()
{
    if (LogIn()) {
        system("color 2F");
        cout << endl << "Your account balance is " << 7500 << ".\n";
    }
    return 0;
}