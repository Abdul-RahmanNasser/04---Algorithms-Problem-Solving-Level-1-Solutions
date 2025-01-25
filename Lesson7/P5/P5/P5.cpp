// Problem #35: Piggy Bank Calculator.
#include <iostream>
using namespace std;
struct St_Piggy_Bank_Content {
    int pennies, Nickels, Dimes, Quarters, Dollars;
};
St_Piggy_Bank_Content Read() {
    St_Piggy_Bank_Content Piggy_Bank_Content;
    cout << "Please, enter pennies: ";
    cin >> Piggy_Bank_Content.pennies;
    cout << "Please, enter nickels: ";
    cin >> Piggy_Bank_Content.Nickels;
    cout << "Please, enter dimes: ";
    cin >> Piggy_Bank_Content.Dimes;
    cout << "Please, enter quarters: ";
    cin >> Piggy_Bank_Content.Quarters;
    cout << "Please, enter dollars: ";
    cin >> Piggy_Bank_Content.Dollars;
    return Piggy_Bank_Content;
}
int Calculate(St_Piggy_Bank_Content Piggy_Bank_Content) {
    int total_pennies;
    total_pennies = Piggy_Bank_Content.pennies + Piggy_Bank_Content.Nickels * 5 + Piggy_Bank_Content.Dimes * 10 + Piggy_Bank_Content.Quarters * 25 + Piggy_Bank_Content.Dollars * 100;
    return total_pennies;
}
int main()
{
    St_Piggy_Bank_Content Piggy_Bank_Content = Read();
    cout << "The total pennies = " << Calculate(Piggy_Bank_Content) << " pennies.\n";
    cout << "The total dollars = " << (float)Calculate(Piggy_Bank_Content) / 100 << " dollars.\n";
    return 0;
}