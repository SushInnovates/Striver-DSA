#include <iostream>
using namespace std;

int CheckPrimeNumber(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << n << " is a Prime Number";
    }
    else
    {
        cout << n << " is not a Prime Number";
    }
}

int main()
{
    int n;
    cout << "Enter Number  :";
    cin >> n;

    CheckPrimeNumber(n);
    return 0;
}