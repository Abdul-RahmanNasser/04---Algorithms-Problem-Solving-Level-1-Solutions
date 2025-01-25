// Problem #37: Sum Until - 99.
#include <iostream>
#include <string>
using namespace std;
int Read_Num(string message) {
    int num;
    cout << message;
    cin >> num;
    return num;
}
int Calculate_Sum() {
    int num, sum = 0, counter = 1;
    do {
        num = Read_Num("Please, enter number " + to_string(counter) + ": ");
        if (num == -99)
            return sum;
        sum += num;
        counter++;
    } while (num != -99);
}
int main()
{
    cout << "The result = " << Calculate_Sum() << ".\n";
    return 0;
}