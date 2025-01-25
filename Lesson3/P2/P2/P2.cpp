// Problem #12: Max of 2 Numbers.
#include <iostream>
using namespace std;
void read_nums(int& num1, int& num2) {
    cout << "Please, enter your first number: ";
    cin >> num1;
    cout << "Please, enter you second number: ";
    cin >> num2;
}
int check_max(int num1, int num2) {
    if (num1 > num2)
        return num1;
    return num2;
}
void print_max(int num) {
    cout << "The maximum number is: " << num << ".\n";
}
int main()
{
    int num1, num2;
    read_nums(num1, num2);
    print_max(check_max(num1,num2));
    return 0;
}