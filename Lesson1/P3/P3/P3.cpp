// Problem #3: Write a program to ask the user to enter a number, then Print “ODD” if its odd, Or “Even” if its even.
#include <iostream>
using namespace std;
enum num_type { odd, even };
int read_num() {
    int num;
    cout << "Please, enter a number: ";
    cin >> num;
    return num;
}
num_type check_num_type(int num) {
    if (num % 2 == num_type::odd)
        return num_type::odd;
    else
        return num_type::even;
}
void print_num_type(num_type num_type) {
    if (num_type == 0)
        cout << "The number is even.\n";
    else
        cout << "The number is odd.\n";
}
int main()
{
    print_num_type(check_num_type(read_num()));
    return 0;
}