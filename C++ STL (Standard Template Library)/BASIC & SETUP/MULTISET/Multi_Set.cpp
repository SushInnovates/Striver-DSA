#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    // Insert elements
    ms.insert(10);  // {10}
    ms.insert(10);  // {10 , 10}
    ms.insert(10);  //{10 ,10, 10}
    ms.insert(20);
    ms.insert(10); // duplicate allowed
    ms.emplace(15);

    cout << "Elements in multiset: ";
    for (auto x : ms) cout << x << " "; // 10 10 15 20
    cout << endl;

    // Count frequency
    cout << "Count of 10: " << ms.count(10) << endl; // 2

    // Find element
    auto it = ms.find(15);
    if (it != ms.end())
        cout << "Found: " << *it << endl;

    // Erase
    ms.erase(10); // removes all 10s
    cout << "After erasing 10: ";
    for (auto x : ms) cout << x << " "; // 15 20
    cout << endl;

    // Erase only one occurrence
    ms.insert(25);
    ms.insert(25);
    auto it2 = ms.find(25);
    if (it2 != ms.end()) ms.erase(it2); // erase single 25
    cout << "After erasing one 25: ";
    for (auto x : ms) cout << x << " "; // 15 20 25
    cout << endl;

    // Lower & Upper Bound
    cout << "Lower bound of 20: " << *ms.lower_bound(20) << endl;  
    cout << "Upper bound of 20: " << *ms.upper_bound(20) << endl;  

    // Size & clear
    cout << "Size: " << ms.size() << endl;
    ms.clear();
    cout << "Size after clear: " << ms.size() << endl;

    return 0;
}
