// Problem #30: Factorial of N!
#include <iostream>
using namespace std;
int Read_Positive_Number(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num < 0);
    return num;
}
int Calculate_Factorial(int num) {
    int factorial = 1;
    for (int counter = num; counter >= 2; counter--)
        factorial *= counter;
    return factorial;
}
int main()
{
    cout << Calculate_Factorial(Read_Positive_Number("Please, enter a positive integer number or 0: "));
    return 0;
}