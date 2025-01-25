// Problem #21: Circle Area Along the Circumference.
#include <iostream>
using namespace std;
float Read_Circumference() {
    float circumference;
    cout << "Please, enter the circumference: ";
    cin >> circumference;
    return circumference;
}
float Calculate_Area(float circumference) {
    const float PI = 3.14;
    return pow(circumference / 2, 2) / PI;
}
void Print_Area(float Area) {
    cout << "The area of the circle = " << Area << " square units.\n";
}
int main()
{
    Print_Area(Calculate_Area(Read_Circumference()));
    return 0;
}