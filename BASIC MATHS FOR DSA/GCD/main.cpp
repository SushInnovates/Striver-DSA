#include <iostream>
#include <numeric>
using namespace std;

int GCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}
int main()
{
    int a, b;
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;

    cout << "GCD is : " << GCD(a, b) << endl;
    return 0;
}