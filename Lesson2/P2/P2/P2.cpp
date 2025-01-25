// Problem #7: Half Number.
#include <iostream>
#include <string>
using namespace std;
int num() {
    int num;
    cout << "Please, enter a number: ";
    cin >> num;
    return num;
}
float calculate_half(int num) {
    return (float)num / 2;
}
void print_half(int num) {
    string result = "The half of " + to_string(num) + " = " + to_string(calculate_half(num)) + ".\n";
    cout << endl << result << endl;
}
int main()
{
    print_half(num());
    return 0;
}