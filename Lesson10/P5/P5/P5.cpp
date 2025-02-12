// Problem #50: ATM PIN 3 Times.
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
    int counter = 3;
    do {
        PIN_Code = Read_PIN_Code();
        counter--;
        if (PIN_Code == "1234")
            return 1;
        else {
            system("color 4F");
            if (counter != 0)
                cout << "\nWrong Code, you have " << counter << " chances.\n";
        }
    } while (counter >= 1 && PIN_Code != "1234");
    return 0;
}
int main()
{
    if (LogIn()) {
        system("color 2F");
        cout << endl << "Your account balance is " << 7500 << ".\n";
    }
    else
        cout << endl << "Your card is blocked, call the bank for help.\n";
    return 0;
}