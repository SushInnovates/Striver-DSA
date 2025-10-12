#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void PrintDivisors(int n)
{
    vector<int> ls;
    // 6 * 6 <= 36
    // 7 * 7 <= 36 false
    //this loop is running for O(sqrt(n))
    for (int i = 1; i * i <= n; i++) /* use i*i <= n for time complexity ,sqrt(n) is a
        inbuilt function so it will call each time so  its time complexity will be high*/

    {
        if (n % i == 0)
        {
            ls.push_back(i);
        }
        if ((n / i) != i)
        {
            ls.push_back(n / i);
        }
    }
    // O(  the number of factors * log(no of factors)) : n is the number of factors
    sort(ls.begin(), ls.end());
    //O(number of factors)
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    PrintDivisors(n);
    return 0;
}
