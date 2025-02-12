// Problem #47: Loan Installment Months.
#include <iostream>
using namespace std;
float Read_Positive_Num(string message) {
    float num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
float Calculate_Total_Months(float loan_amount, float monthly_payment) {
    return (float)loan_amount / monthly_payment;
}
int main()
{
    float loan_amount = Read_Positive_Num("Please, enter the loan amount: ");
    float monthly_payment = Read_Positive_Num("Please, enter the monthly payment: ");
    cout << "The total months = " << Calculate_Total_Months(loan_amount, monthly_payment) << " months.\n";
    return 0;
}