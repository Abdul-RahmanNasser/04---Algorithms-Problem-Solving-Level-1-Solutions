// Problem #2: This program is to ask the user to enter his/her name and print it on screen.
#include <iostream>
#include <string>
using namespace std;
string read_name() {
    string name;
    cout << "Please, enter your name: ";
    getline(cin, name);
    return name;
}
void print_name(string name) {
    cout << "Your name is \'" << name << "\'.\n";
}
int main()
{
    print_name(read_name());
    return 0;
}