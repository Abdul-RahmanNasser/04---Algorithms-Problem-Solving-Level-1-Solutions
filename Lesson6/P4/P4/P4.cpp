// Problem #28: Sum Even Numbers from 1 to N.
#include <iostream>
using namespace std;
enum Odd_Or_Even_Number { Odd = 1, Even };
int Read_Num() {
    int num;
    cout << "Please, enter your number: ";
    cin >> num;
    return num;
}
Odd_Or_Even_Number Check_Odd_Or_Even(int num) {
    if (num % 2 != 0)
        return Odd_Or_Even_Number::Odd;
    return Odd_Or_Even_Number::Even;
}
void Calculate_Sum_Evens_Using_While(int num) {
    int counter = 2, sum = 0;
    while (counter <= num) {
        if (Check_Odd_Or_Even(counter) == Odd_Or_Even_Number::Even)
            sum += counter;
        counter++;
    }
    cout << endl << "The summition of the even numbers by while loop statement = " << sum << ".\n" << endl;
}
void Calculate_Sum_Evens_Using_Do_While(int num) {
    int counter = 1, sum = 0;
    do {
        if (Check_Odd_Or_Even(counter) == Odd_Or_Even_Number::Even)
            sum += counter;
        counter++;
    } while (counter <= num);
    cout << "The summition of the even numbers by do...while loop statement = " << sum << ".\n" << endl;
}
void Calculate_Sum_Evens_Using_For(int num) {
    int sum = 0;
    for (int counter = 2; counter <= num; counter++)
        if (Check_Odd_Or_Even(counter) == Odd_Or_Even_Number::Even)
            sum += counter;
    cout << "The summition of the even numbers by for loop statement = " << sum << ".\n" << endl;
}
int main()
{
    int num = Read_Num();
    Calculate_Sum_Evens_Using_While(num);
    Calculate_Sum_Evens_Using_Do_While(num);
    Calculate_Sum_Evens_Using_For(num);
    return 0;
}