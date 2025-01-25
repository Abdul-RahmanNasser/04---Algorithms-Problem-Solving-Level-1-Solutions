// Problem #15: Rectangle Area.
#include <iostream>
using namespace std;
void Read_Dimensions(float& length, float& width) {
    cout << "Please, enter the rectangle length: ";
    cin >> length;
    cout << "Please, enter the rectangle width: ";
    cin >> width;
}
float Calculate_Area(float length, float width) {
    return length * width;
}
void Print_Area(float Area) {
    cout << "The area of the rectangle = " << Area << " square units.\n";
}
int main()
{
    float length, width;
    Read_Dimensions(length, width);
    Print_Area(Calculate_Area(length, width));
    return 0;
}