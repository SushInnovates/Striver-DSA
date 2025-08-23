#include <iostream>
using namespace std;
int main()
{
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