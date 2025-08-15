#include <iostream>
using namespace std;
int main()
{
    /*
    pattern 2 -
    *
    **
    ***
    ****
    *****
    */
    int n, i, j;
    cout << "Enter N : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}