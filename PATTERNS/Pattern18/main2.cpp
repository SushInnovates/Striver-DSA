#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 18 (Generalized) -
    For n = 5:
    E
    D E
    C D E
    B C D E
    A B C D E
    */

    int i, n;
    char ch;
    cout << "Enter N : ";
    cin >> n;

    char last = 'A' + (n - 1); // Example: if n=5 → 'E'

    for (i = 0; i < n; i++)
    {
        for (ch = last - i; ch <= last; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
