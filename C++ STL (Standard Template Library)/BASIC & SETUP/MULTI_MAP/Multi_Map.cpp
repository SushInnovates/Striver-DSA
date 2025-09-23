#include <iostream>
#include <map>
using namespace std;

int main() {

    // Everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used




    // 1. Create a multimap
    multimap<int, string> mp;
    mp.insert({1, "Apple"});
    mp.insert({2, "Banana"});
    mp.insert({1, "Mango"});  // duplicate key
    mp.insert({3, "Orange"});

    // 2. Print all elements
    cout << "Multimap elements:" << endl;
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // 3. Find function
    auto it = mp.find(1);  // finds first occurrence of key 1
    if (it != mp.end())
        cout << "\nFound key 1: " << it->first << " -> " << it->second << endl;

    // 4. Count function
    cout << "Count of key 1: " << mp.count(1) << endl;

    // 5. Erase by key
    mp.erase(2);
    cout << "\nAfter erasing key 2:" << endl;
    for (auto it : mp) cout << it.first << " -> " << it.second << endl;

    // 6. Lower and upper bound
    auto lb = mp.lower_bound(1);  // first element >= 1
    if (lb != mp.end())
        cout << "\nLower bound of 1: " << lb->first << " -> " << lb->second << endl;

    auto ub = mp.upper_bound(1);  // first element > 1
    if (ub != mp.end())
        cout << "Upper bound of 1: " << ub->first << " -> " << ub->second << endl;

    // 7. Iterators
    cout << "\nIterating using iterator:" << endl;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    cout << "\nReverse iteration using rbegin/rend:" << endl;
    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // 8. Check size and empty
    cout << "\nSize of multimap: " << mp.size() << endl;
    cout << "Is multimap empty? " << (mp.empty() ? "Yes" : "No") << endl;

    return 0;
}
