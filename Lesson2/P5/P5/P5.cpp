// Problem #9: Sum of 3 numbers.
#include <iostream>
using namespace std;
void read_num(int& num1, int& num2, int& num3) {
    cout << "Please, enter your first number: ";
    cin >> num1;
    cout << "Please, enter your second number: ";
    cin >> num2;
    cout << "Please, enter your third number: ";
    cin >> num3;
}
int calculate_sum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}
float calculate_avg(int num1, int num2, int num3) {
    return (float)calculate_sum(num1, num2, num3) / 3;
}
void print_sum(int avg) {
    cout << "The average of the 3 numbers = " << avg << ".\n";
}
int main()
{
    int number1, number2, number3;
    read_num(number1, number2, number3);
    print_sum(calculate_avg(number1, number2, number3));
    return 0;
}