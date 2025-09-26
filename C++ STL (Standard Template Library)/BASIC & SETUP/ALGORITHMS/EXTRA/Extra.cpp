#include <bits/stdc++.h>
using namespace std;

// Custom comparator
bool comp(pair<int,int> a, pair<int,int> b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
}

int main() {

    // sort it according to second element
// if second element is asme, then sort
// it according to first element but in descending
    
    // Sorting an array
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    sort(arr, arr + n); // ascending
    cout << "Ascending: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    sort(arr, arr + n, greater<int>()); // descending
    cout << "Descending: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    // Sorting pairs with custom comparator
    pair<int,int> p[] = {{1,2},{2,1},{4,1}};
    int m = 3;

    sort(p, p + m, comp);
    cout << "Sorted pairs: ";
    for (auto pr : p) cout << "{" << pr.first << "," << pr.second << "} ";
    cout << endl;

    // Counting set bits
    int num = 7;
    cout << "Set bits in " << num << " = " << __builtin_popcount(num) << endl;

    long long bigNum = 1232454656577;
    cout << "Set bits in " << bigNum << " = " << __builtin_popcountll(bigNum) << endl;

    // Next permutation
    string s = "123";
    cout << "Permutations of " << s << ":" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}

