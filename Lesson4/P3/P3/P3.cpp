// Problem #18: Circle Area.
#include <iostream>
using namespace std;
float Read_Redius() {
    float redius;
    cout << "Please, enter the redius of the circle: ";
    cin >> redius;
    return redius;
}
float Calculate_Area(float redius) {
    const float PI = 4.13;
    return PI * pow(redius, 2);
}
void Print_Area(float Area) {
    cout << "The area of the circle = " << Area << " square units.\n";
}
int main()
{
    Print_Area(Calculate_Area(Read_Redius()));
    return 0;
}