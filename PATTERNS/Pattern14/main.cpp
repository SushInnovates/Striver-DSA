#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 14 -
    A
    A B
    A B C
    A B C D
    A B C D E
    */
    int i, n;
    char ch;
    cout << "Enter N :";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
