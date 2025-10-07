#include <iostream>
using namespace std;

int DigitCount()
{
    int count = 0;
    int number;

    cout << "Enter The Number : ";
    cin >> number;

    while (number > 0)
    {
        int LastDigit = number % 10;
        count++;
        number = number / 10;
        cout << LastDigit << " ";
    }
    cout << "\nNo of digits are " << count;
    return count;
}

int main()
{

    DigitCount();
}

