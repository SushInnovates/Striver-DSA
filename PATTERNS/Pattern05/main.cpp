#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 5 -
    *****
    ****
    ***
    **
    *

    */
    int n, i, j;
    cout << "Enter N : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}