// Problem #31: Power of 2, 3, 4.
#include <iostream>
using namespace std;
int Read_Num() {
    int num;
    cout << "Please, enter a number: ";
    cin >> num;
    return num;
}
void Calculate_Power_2_3_4_Of_Num(int num) {
    int a = 1, b = 1, c = 1, i = 1;
    for (; i <= 2; i++)
        a *= num;
    for (i = 1; i <= 3; i++)
        b *= num;
    for (i = 1; i <= 4; i++)
        c *= num;
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    Calculate_Power_2_3_4_Of_Num(Read_Num());
    return 0;
}