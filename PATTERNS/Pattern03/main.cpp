#include <iostream>
using namespace std;
int main()
{
    /*
    pattern 3 -
    1
    12
    123
    1234
    12345

    */
    int n, i, j;
    cout << "Enter N :";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}