// Problem #26: Print Numbers from 1 to N.
#include <iostream>
using namespace std;
int Read_Num() {
    int num;
    cout << "Please, enter your number: ";
    cin >> num;
    return num;
}
void Print_Ring_Using_While(int N) {
    cout << endl << "Typing the ring from 1 to " << N << " by while loop statement.\n";
    int counter = 1;
    while (counter <= N)
        cout << counter++ << endl;
    cout << endl;
}
void Print_Ring_Using_Do_While(int N) {
    cout << endl << "Typing the ring from 1 to " << N << " by do while loop statement.\n";
    int counter = 1;
    do
        cout << counter++ << endl;
    while (counter <= N);
    cout << endl;
}
void Print_Ring_Using_For(int N) {
    cout << endl << "Typing the ring from 1 to " << N << " by for loop statement.\n";
    for (int counter = 1; counter <= N; counter++)
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