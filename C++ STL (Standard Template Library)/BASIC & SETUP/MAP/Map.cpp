#include <iostream>
#include <map>
using namespace std;

int main() {
    // 1. Basic map
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp[2] = 10;

    cout << "Map contents (mpp):" << endl;
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // 2. Map with pair as value
    map<int, pair<int, int>> mpp2;
    mpp2[1] = {2, 3};
    mpp2[2] = {4, 5};

    cout << "\nMap with pair values (mpp2):" << endl;
    for (auto it : mpp2) {
        cout << it.first << " -> (" << it.second.first << ", " << it.second.second << ")" << endl;
    }

    // 3. Map with pair as key
    map<pair<int, int>, int> mpp3;
    mpp3[{1, 2}] = 10;
    mpp3[{2, 4}] = 20;

    cout << "\nMap with pair keys (mpp3):" << endl;
    for (auto it : mpp3) {
        cout << "(" << it.first.first << ", " << it.first.second << ") -> " << it.second << endl;
    }

    // 4. Find function example
    cout << "\nUsing find() in map:" << endl;
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Key 3 found, value = " << it->second << endl;
    } else {
        cout << "Key 3 not found!" << endl;
    }

    auto it2 = mpp.find(100); // key not present
    if (it2 != mpp.end()) {
        cout << "Key 100 found, value = " << it2->second << endl;
    } else {
        cout << "Key 100 not found!" << endl;
    }

    // 5. Count function
    cout << "\nCount function:" << endl;
    cout << "Count of key 2: " << mpp.count(2) << endl;   // 1 (exists)
    cout << "Count of key 50: " << mpp.count(50) << endl; // 0 (not exists)

    // 6. Erase function
    cout << "\nBefore erase, size = " << mpp.size() << endl;
    mpp.erase(2); // erase by key
    cout << "After erasing key 2, size = " << mpp.size() << endl;

    // Erase using iterator
    auto it3 = mpp.find(3);
    if (it3 != mpp.end()) {
        mpp.erase(it3);
    }
    cout << "After erasing key 3, size = " << mpp.size() << endl;

    // 7. Lower bound & Upper bound
    map<int, int> mpp4;
    mpp4[1] = 100;
    mpp4[2] = 200;
    mpp4[4] = 400;
    mpp4[5] = 500;

    cout << "\nMap contents (mpp4):" << endl;
    for (auto it : mpp4) {
        cout << it.first << " -> " << it.second << endl;
    }

    auto lb = mpp4.lower_bound(2); // >= 2
    if (lb != mpp4.end())
        cout << "Lower bound of 2: " << lb->first << " -> " << lb->second << endl;

    auto ub = mpp4.upper_bound(2); // > 2
    if (ub != mpp4.end())
        cout << "Upper bound of 2: " << ub->first << " -> " << ub->second << endl;

    auto ub2 = mpp4.upper_bound(5); // element beyond last key
    if (ub2 == mpp4.end())
        cout << "Upper bound of 5 does not exist (points to end)." << endl;

        //eraase, swap, size, empty, are same as prevoius/above
    return 0;
}

