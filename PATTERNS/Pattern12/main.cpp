#include <iostream>
using namespace std;
int main()
{

    /*
    pattern 12-
1        1
12      21
123    321
1234  4321
1234554321
    */
    int n, j, i;
    cout << "Enter the N : ";
    cin >> n;

    int space = 2 * (n - 1);
    for (i = 1; i <= n; i++)
    {
        // number
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // number
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }

    return 0;
}
