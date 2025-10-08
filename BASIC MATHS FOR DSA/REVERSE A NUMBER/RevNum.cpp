#include <iostream>
using namespace std;

void RevNum()
{
    int LastDigit, Number, ReverseNumber = 0;
    cout << "Enter Number : ";
    cin >> Number;

    while (Number > 0)
    {

        LastDigit = Number % 10;
        ReverseNumber = (ReverseNumber * 10) + LastDigit;
        Number = Number / 10;
    }
    cout << "Reversed : " << ReverseNumber;
}

int main()
{
    RevNum();

    return 0;
}