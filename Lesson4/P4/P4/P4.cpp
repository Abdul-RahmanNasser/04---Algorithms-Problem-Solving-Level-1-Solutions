// Problem #19: Circle Area Through Diameter.
#include <iostream>
using namespace std;
float Read_Diameter() {
    float diameter;
    cout << "Please, enter the diameter of the circle: ";
    cin >> diameter;
    return diameter;
}
float Calculate_Area(float diameter) {
    const float PI = 3.14;
    return PI * pow(diameter / 2, 2);
}
void Print_Area(float Area) {
    cout << "The area of the circle = " << Area << " square units.\n";
}
int main()
{
    Print_Area(Calculate_Area(Read_Diameter()));
    return 0;
}