// Problem #38: Is Prime Number ?.
#include <iostream>
using namespace std;
enum En_Prime_Or_Not_Prime { Prime = 1, Not_Prime };
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
En_Prime_Or_Not_Prime Check_Prime_Or_Not_Prime(int num) {
    int half_of_num = round(num / 2);
    for (int counter = 2; counter <= half_of_num; counter++)
        if (num % counter == 0)
            return En_Prime_Or_Not_Prime::Prime;
    return En_Prime_Or_Not_Prime::Not_Prime;
}
void Print_Prime_Or_Not_Prime(int num) {
    switch (Check_Prime_Or_Not_Prime(num))
    {
    case En_Prime_Or_Not_Prime::Prime:
        cout << "A prime number." << endl;
        break;
    default:
        cout << "Not a prime number." << endl;
    }
}
int main()
{
    Print_Prime_Or_Not_Prime(Read_Num("Please, enter a positive number: "));
    return 0;
}