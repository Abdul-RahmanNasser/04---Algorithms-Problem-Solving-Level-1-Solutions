// Problem #20: Circle Area inscribed in a square.
#include <iostream>
using namespace std;
float Read_Side() {
    float side;
    cout << "Please, enter the side of the square: ";
    cin >> side;
    return side;
}
float Calculate_Area(float side) {
    const float PI = 3.14;
    return PI * pow(side / 2, 2);
}
void Print_Area(float Area) {
    cout << "The area of the circle = " << Area << " square units.\n";
}
int main()
{
    Print_Area(Calculate_Area(Read_Side()));
    return 0;
}