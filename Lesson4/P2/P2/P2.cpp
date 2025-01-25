// Problem #17: Triangle Area.
#include <iostream>
using namespace std;
void Read_Dimensions(float& base, float& height) {
    cout << "Please, enter the base of the traiangle: ";
    cin >> base;
    cout << "Please, enter the height of the traiangle: ";
    cin >> height;
}
float Calculate_Area(float base, float height) {
    return (base * height) / 2;
}
void Print_Area(float Area) {
    cout << "The area of the traiangle = " << Area << " square units.\n";
}
int main()
{
    float base, height;
    Read_Dimensions(base, height);
    Print_Area(Calculate_Area(base, height));
    return 0;
}