#include <iostream>
using namespace std;

void CheckPalindrome()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int revnum = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        revnum = (revnum * 10) + ld;
        n = n / 10;
    }
    if (dup == revnum)
        cout << "Number is Palindrome";
    else
        cout << "Number is Not Palindrome";
}

int main()
{
    CheckPalindrome();
    return 0;
}