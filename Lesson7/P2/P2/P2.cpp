// Problem #32: Power of M.
#include <iostream>
using namespace std;
int Read_Num() {
    int num;
    cout << "Please, enter a number: ";
    cin >> num;
    return num;
}
int Read_Power() {
    int power;
    cout << "Please, enter a power: ";
    cin >> power;
    return power;
}
int Calculate_Power_Num_Of_M(int num, int power) {
    int result = num;
    if (power == 0)
        return 1;
    for (int i = 2; i <= power; i++)
        result *= num;
    return result;
}
int main()
{
    cout << "The result = " << Calculate_Power_Num_Of_M(Read_Num(), Read_Power()) << ".\n";
    return 0;
}