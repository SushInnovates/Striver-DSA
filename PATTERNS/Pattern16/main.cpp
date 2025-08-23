#include <iostream>
using namespace std;
int main()
{

    /*
    Pattern 16 -
A
B B
C C C
D D D D
E E E E E
*/
    int n, i, j;
    char ch;
    cout << "Enter N:";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        ch = 'A' + i;
        for (j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
