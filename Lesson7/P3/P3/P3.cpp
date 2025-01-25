// Problem #33: Grade A, B, C, D, E, F.
#include <iostream>
using namespace std;
int Read_Num(int from, int to) {
    int grade;
    do {
        cout << "Please, enter your grade: ";
        cin >> grade;
    } while (grade > 100 || grade < 0);
    return grade;
}
char Get_Grade_Letter(int grade) {
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'E';
    else
        return 'F';
}
int main()
{
    cout << Get_Grade_Letter(Read_Num(0, 100)) << endl;
    return 0;
}