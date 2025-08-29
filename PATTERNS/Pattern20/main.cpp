#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 20 -
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

    */

    int i, j, n;
    cout << "Enter N  :";
    cin >> n;
    int spaces = 2 * n - 2;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // stars
        for (j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // spaces
        for (j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // stars
        for (j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
    return 0;
}