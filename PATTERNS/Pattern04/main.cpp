#include <iostream>
using namespace std;
int main()
{
    /*
    pattern 4 -
    1
    22
    333
    4444
    55555

    */

    int n, i, j;
    cout << "Enter N : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}