// Problem #14: Swap Numbers.
#include <iostream>
using namespace std;
void Read_Nums(int& num1, int& num2) {
    cout << "Please, enter your first number: ";
    cin >> num1;
    cout << "Please, enter your second number: ";
    cin >> num2;
}
void Swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void Print_Nums(int& num1, int& num2) {
    cout << endl << "Your first number is " << num1 << ".\n";
    cout << "Your second number is " << num2 << ".\n" << endl;
}
int main()
{
    int num1, num2;
    Read_Nums(num1, num2);
    Print_Nums(num1, num2);
    Swap(num1, num2);
    Print_Nums(num1, num2);
    return 0;
}