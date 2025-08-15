#include <iostream>
using namespace std;
int main()
{
    /*
    pattern 6 -
    12345
    1234
    123
    12
    1
    */

    int n, i, j;
    cout << "Enter N :";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}