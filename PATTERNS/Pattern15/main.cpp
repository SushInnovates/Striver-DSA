#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 15-
A B C D E
A B C D
A B C
A B
A
*/
    int n, i;
    char ch;
    cout << "Enter the N : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (ch = 'A'; ch <= 'A' + (n - 1 - i); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
