// Problem #6: Full Name.
#include <iostream>
using namespace std;
struct info {
    string first_name;
    string last_name;
};
info read_name() {
    info personal_info;
    cout << "Please, enter your first name: ";
    cin >> personal_info.first_name;
    cout << "Please, enter your last name: ";
    cin >> personal_info.last_name;
    return personal_info;
}
string full_name(info personal_info, bool reversed) {
    if (reversed)
        return personal_info.last_name + " " + personal_info.first_name;
    else
        return personal_info.first_name + " " + personal_info.last_name;
}
void print_full_name(string full_name) {
    cout << "Your full name is \'" << full_name << "\'.\n";
}
int main()
{
    print_full_name(full_name(read_name(), false));
    return 0;
}