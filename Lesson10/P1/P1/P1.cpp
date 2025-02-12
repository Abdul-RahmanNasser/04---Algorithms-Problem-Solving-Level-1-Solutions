// Problem #46: Print Letters from A to Z.
#include <iostream>
using namespace std;
void Print_Capital_Letters() {
    for (int i = 65; i <= 90; i++)
        cout << char(i) << "." << endl;
}
int main()
{
    Print_Capital_Letters();
    return 0;
}