#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 19 -
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
    */
    int i, j, n;
    cout << "Enter N : ";
    cin >> n;
    int insp = 0;
    for (i = 0; i < n; i++)
    {
        // stars
        for (j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (j = 0; j < insp; j++)
        {
            cout << " ";
        }
        // stars
        for (j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        insp = insp + 2;
        cout << endl;
    }

    insp = 2 * n - 2;

    for (i = 1; i <= n; i++)
    {
        // stars
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // spaces
        for (j = 1; j <= insp; j++)
        {
            cout << " ";
        }
        // stars
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        insp = insp - 2;
        cout << endl;
    }
    return 0;
}