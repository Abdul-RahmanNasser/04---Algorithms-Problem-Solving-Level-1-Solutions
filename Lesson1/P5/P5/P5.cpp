// Problem #5: Hire a driver Case 2.
#include <iostream>
using namespace std;
struct info {
    short age;
    bool hasdriverlicense, hasrecommendation;
};
info read_info() {
    info personal_info;
    cout << "Please, enter your age: ";
    cin >> personal_info.age;
    cout << "Please, do you have a driver license (1 if yes and 0 if no)?" << endl;
    cin >> personal_info.hasdriverlicense;
    cout << "Please, do you have a recommendation (1 if yes and 0 if no)?" << endl;
    cin >> personal_info.hasrecommendation;
    return personal_info;
}
bool check_info(info read_info) {
    if (read_info.hasrecommendation)
        return true;
    else
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