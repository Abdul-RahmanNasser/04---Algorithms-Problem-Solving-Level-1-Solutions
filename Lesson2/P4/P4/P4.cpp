// Problem #9: Sum of 3 numbers.
#include <iostream>
using namespace std;
void read_num(int& num1, int& num2, int& num3) {
    cout << "Please, enter your number 1: ";
    cin >> num1;
    cout << "Please, enter your number 2: ";
    cin >> num2;
    cout << "Please, enter your number 3: ";
    cin >> num3;
}
int calculate_sum(int& num1, int& num2, int& num3) {
    return num1 + num2 + num3;
}
void print_sum(int sum) {
    cout << "The summition of the 3 numbers = " << sum << ".\n";
}
int main()
{
    int number1, number2, number3;
    read_num(number1, number2, number3);
    print_sum(calculate_sum(number1, number2, number3));
    return 0;
}