#include <iostream>
using namespace std;

void CheckArmstrong()
{
    int Number, LastDigit, sum = 0;
    cout << "Enter Number : ";
    cin >> Number;
    int dup = Number;
    while (Number > 0)
    {
        LastDigit = Number % 10;
        sum = sum + (LastDigit * LastDigit * LastDigit);
        Number = Number / 10;
    }
    if (sum == dup)
        cout << "Number is Armstrong";
    else
        cout << "Number is not Armstrong";
}
int main()
{
    CheckArmstrong();

    return 0;
}