// Problem #13: Max of 3 Numbers.
#include <iostream>
using namespace std;
void Read_Nums(int& num1, int& num2, int& num3) {
    cout << "Please, enter your first number: ";
    cin >> num1;
    cout << "Please, enter your second number: ";
    cin >> num2;
    cout << "Please, enter your third number: ";
    cin >> num3;
}
int Check_Max(int num1, int num2, int num3) {
    if (num1 > num2) {
        if (num1 > num3)
            return num1;
        return num3;
    }
    else {
        if (num2 > num3)
            return num2;
        return num3;
    }
}
void Print_Max(int max) {
    cout << "The maximum of your three numbers is " << max << ".\n";
}
int main()
{
    int num1, num2, num3;
    Read_Nums(num1, num2, num3);
    Print_Max(Check_Max(num1, num2, num3));
    return 0;
}