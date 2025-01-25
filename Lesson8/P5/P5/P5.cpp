// Problem #4: Service Fee and Sales Tax.
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
float Total_Bill_After_Service_Fee_And_Sales_Tax(float total_bill) {
    total_bill = total_bill * 1.1;
    total_bill = total_bill * 1.16;
    return total_bill;
}
int main()
{
    float total_bill = Read_Num("Please, enter the total bill: ");
    cout << "The total bill = " << total_bill << "$.\n";
    cout << "The total bill after service fee and sales tax = " << Total_Bill_After_Service_Fee_And_Sales_Tax(total_bill) << "$.\n";
    return 0;
}