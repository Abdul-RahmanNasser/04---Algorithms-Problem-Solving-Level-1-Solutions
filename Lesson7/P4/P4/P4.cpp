// Problem #34: Commission Percentage.
#include <iostream>
using namespace std;
int Read_Total_Sales() {
    int total_sales;
    cout << "Please, enter the total sales: ";
    cin >> total_sales;
    return total_sales;
}
float Get_Percentage(int total_sales) {
    if (total_sales >= 1000000)
        return 0.01;
    else if (total_sales >= 500000)
        return 0.02;
    else if (total_sales >= 100000)
        return 0.03;
    else if (total_sales >= 50000)
        return 0.05;
    else
        return 0;
}
float Get_Total_Commision(int total_sales) {
    return Get_Percentage(total_sales) * total_sales;
}
int main()
{
    int total_sales = Read_Total_Sales();
    cout << "The percentage = " << Get_Percentage(total_sales) << ".\n";
    cout << "The commision = " << Get_Total_Commision(total_sales) << ".\n";
    return 0;
}