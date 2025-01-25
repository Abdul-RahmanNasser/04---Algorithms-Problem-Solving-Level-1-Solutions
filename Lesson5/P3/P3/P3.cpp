// Problem #23: Circle Area circle Described Around an Arbitrary Triangle.
#include <iostream>
using namespace std;
void Read_Dimensions(float& A, float& B, float& C) {
    cout << "Please, enter the triangle side A: ";
    cin >> A;
    cout << "Please, enter the triangle side B: ";
    cin >> B;
    cout << "Please, enter the triangle side C: ";
    cin >> C;
}
float Calculate_Area(float A, float B, float C) {
    const float PI = 3.14;
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    float Area = PI * pow(T, 2);
    return Area;
}
void Print_Area(float Area) {
    cout << "The area of the circle = " << Area << " square units.\n";
}
int main()
{
    float A, B, C;
    Read_Dimensions(A, B, C);
    Print_Area(Calculate_Area(A, B, C));
    return 0;
}