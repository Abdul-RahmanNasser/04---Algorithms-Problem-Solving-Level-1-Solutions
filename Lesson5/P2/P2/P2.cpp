// Problem #22: Circle Area Inscribed in an Isosceles Triangle.
#include <iostream>
using namespace std;
void Read_Dimensions(float& A, float& B) {
    cout << "Please, enter the triangle side A: ";
    cin >> A;
    cout << "Please, enter the triangle side B: ";
    cin >> B;
}
float Calculate_Area(float A, float B) {
    const float PI = 3.14;
    return PI * pow(B / 2, 2) * (2 * A - B) / (2 * A + B);
}
void Print_Area(float Area) {
    cout << "The area of circle = " << Area << " square units.\n";
}
int main()
{
    float A, B;
    Read_Dimensions(A, B);
    Print_Area(Calculate_Area(A, B));
    return 0;
}