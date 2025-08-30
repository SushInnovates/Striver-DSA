#include <iostream>
using namespace std;
int main()
{
    /*
    Pattern 22 -
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
    */
    int i, j, n;
    cout << "Enter N : ";
    cin >> n;

    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
    return 0;
}
