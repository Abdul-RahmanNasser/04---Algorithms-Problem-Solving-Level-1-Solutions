// Problem #4: Hire a driver Case 1.
#include <iostream>
using namespace std;
struct info {
    short age;
    bool hasdriverlicense;
};
info read_info() {
    info personal_info;
    cout << "Please, enter your age: ";
    cin >> personal_info.age;
    cout << "Please, do you have a driver license (1 if yes and 0 if no)?" << endl;
    cin >> personal_info.hasdriverlicense;
    return personal_info;
}
bool check_info(info read_info) {
    return read_info.age > 20 && read_info.hasdriverlicense == 1;
}
void print_info(info personal_info) {
    if (check_info(personal_info))
        cout << "Hired.\n";
    else
        cout << "Rejected.\n";
}
int main()
{
    print_info(read_info());
    return 0;
}