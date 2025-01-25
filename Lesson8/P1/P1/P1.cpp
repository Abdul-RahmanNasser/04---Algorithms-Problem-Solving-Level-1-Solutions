// Problem #36: Simple Calculator.
#include <iostream>
using namespace std;
enum En_Operation_Type { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };
float Read_Num(string message) {
    float num;
    cout << message;
    cin >> num;
    return num;
}
En_Operation_Type Read_Operation_Type() {
    char operation_type;
    cout << "Please, enter the operation type (+,-,*,/): ";
    cin >> operation_type;
    return (En_Operation_Type)operation_type;
}
float Calculate(float num1, float num2, En_Operation_Type operation_type) {
    switch (operation_type) {
        case En_Operation_Type::Add:
            return num1 + num2;
        case En_Operation_Type::Subtract:
            return num1 - num2;
        case En_Operation_Type::Multiply:
            return num1 * num2;
        case En_Operation_Type::Divide:
            while (num2 == 0) {
                cout << "Error: no division on zero.\n";
                num2 = Read_Num("Please, enter your second number again: ");
            }
            return num1 / num2;
        default:
            return num1 + num2;
    }
}
int main()
{
    float num1 = Read_Num("Please, enter your first number: ");
    float num2 = Read_Num("Please, enter your second number: ");
    En_Operation_Type operation_type = Read_Operation_Type();
    cout << "The result = " << Calculate(num1, num2, operation_type) << ".\n";
    return 0;
}