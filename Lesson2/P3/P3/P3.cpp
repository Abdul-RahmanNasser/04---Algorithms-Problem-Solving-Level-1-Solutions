// Problem #8: Pass Fail.
#include <iostream>
using namespace std;
enum en_is_success { pass = 1, fail };
int mark() {
    int mark;
    cout << "Please, enter your mark: ";
    cin >> mark;
    return mark;
}
en_is_success check_mark() {
    en_is_success passed;
    if (mark() >= 50)
        return en_is_success::pass;
    return en_is_success::fail;
}
void print_result(en_is_success passed) {
    if (passed == 1)
        cout << "PASS." << endl;
    else
        cout << "FAIL." << endl;
}
int main()
{
    print_result(check_mark());
    return 0;
}