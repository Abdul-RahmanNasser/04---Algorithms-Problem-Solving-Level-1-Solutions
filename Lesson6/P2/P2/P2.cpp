// Problem #27: Print Numbers from N to 1.
#include <iostream>
using namespace std;
int Read_Num() {
    int num;
    cout << "Please, enter your number: ";
    cin >> num;
    return num;
}
void Print_Ring_Using_While(int N) {
    cout << endl << "Typing the ring from " << N << " to 1 by while loop statement.\n";
    int counter = N;
    while (counter >= 1)
        cout << counter-- << endl;
    cout << endl;
}
void Print_Ring_Using_Do_While(int N) {
    cout << endl << "Typing the ring from " << N << " to 1 by do while loop statement.\n";
    int counter = N;
    do
        cout << counter-- << endl;
    while (counter >= 1);
    cout << endl;
}
void Print_Ring_Using_For(int N) {
    cout << endl << "Typing the ring from " << N << " to 1 by for loop statement.\n";
    for (int counter = N; counter >= 1; counter--)
        cout << counter << endl;
    cout << endl;
}
int main()
{
    int N = Read_Num();
    Print_Ring_Using_While(N);
    Print_Ring_Using_Do_While(N);
    Print_Ring_Using_For(N);
    return 0;
}