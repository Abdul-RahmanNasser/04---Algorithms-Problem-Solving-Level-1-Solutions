// Problem #48: Monthly Loan Installment.
#include <iostream>
using namespace std;
float Read_Num(string message) {
    float num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
float Calculate_Monthly_Installment_Amount(float loan_amount, float how_many_months) {
    return (float)loan_amount / how_many_months;
}
int main()
{
    float loan_amount = Read_Num("Please, enter the loan amount: ");
    float how_many_months = Read_Num("Please, enter how many months you do want pay the loan amount in: ");
    cout << "The monthly installment amount = " << Calculate_Monthly_Installment_Amount(loan_amount, how_many_months) << " dollars.\n";
    return 0;
}