#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 18 -
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

    for (i = 0; i < n; i++)
    {
        for (ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}