// Problem #39: Pay Remainder ?
#include <iostream>
using namespace std;
float Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
float Calculate_Remainder(int total_bill, int total_cash_paid) {
    return total_bill - total_cash_paid;
}
int main()
{
    float total_bill = Read_Num("Please, enter the total bill: ");
    float total_cash_paid = Read_Num("Please, enter the total cash paid: ");
    cout << endl << "*****************************************************************\n";
    cout << "The remaider = " << Calculate_Remainder(total_bill, total_cash_paid) << ".\n";
    return 0;
}