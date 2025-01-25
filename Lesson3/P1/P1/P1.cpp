// Problem #9: Average Pass Fai.
#include <iostream>
using namespace std;
enum en_is_success { pass = 1, fail };
void read_num(int& mark1, int& mark2, int& mark3) {
    cout << "Please, enter your first number: ";
    cin >> mark1;
    cout << "Please, enter your second number: ";
    cin >> mark2;
    cout << "Please, enter your third number: ";
    cin >> mark3;
}
int calculate_sum(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}
float calculate_avg(int mark1, int mark2, int mark3) {
    return (float)calculate_sum(mark1, mark2, mark3) / 3;
}
en_is_success check_mark(float average) {
    if (average >= 50)
        return en_is_success::pass;
    return en_is_success::fail;
}
void print_avg(float average) {
    cout << "Your average of marks = " << average << ".\n";
    if (check_mark(average) == 1)
        cout << "PASS.\n";
    else
        cout << "FAIL.\n";
}
int main()
{
    int number1, number2, number3;
    read_num(number1, number2, number3);
    print_avg(calculate_avg(number1, number2, number3));
    return 0;
}