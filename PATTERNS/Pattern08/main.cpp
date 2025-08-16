#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 8-
*********
 *******
  *****
   ***
    *

    */
    int n, i, j;
    cout << "Enter N :";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}