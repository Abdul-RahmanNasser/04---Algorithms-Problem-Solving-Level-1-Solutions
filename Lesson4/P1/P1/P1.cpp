// Problem #16: Rectangle area Through Diagonal and side Area.
#include <iostream>
using namespace std;
void Read_Dimensions(float& side, float& diagonal) {
    cout << "Please, enter the side of the rectangle: ";
    cin >> side;
    cout << "Please, enter the diagonal of the rectangle: ";
    cin >> diagonal;
}
float Calculate_Area(float side, float diagonal) {
    return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}
void Print_Area(float Area) {
    cout << "The area of the rectangle with its side and diagonal = " << Area << " square units.\n";
}
int main()
{
    float length, diagonal;
    Read_Dimensions(length,diagonal);
    Print_Area(Calculate_Area(length,diagonal));
    return 0;
}