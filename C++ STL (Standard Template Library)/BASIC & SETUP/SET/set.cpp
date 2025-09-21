#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.emplace(15);

    //functionality of insert in vector
    //can be used also,that only increases
    //efficiency

    //begin(),end(),rbegin(),rend(),size(),empty() and swap() are same as above 

    cout << "Elements in set: ";
    for (auto x : s) cout << x << " "; // Stored in sorted order
    cout << endl;

    // Find element
    auto it = s.find(20);
    if (it != s.end())
        cout << "Found element: " << *it << endl;

    // Count element (0 or 1 since set stores unique values)
    cout << "Count of 10: " << s.count(10) << endl;
    cout << "Count of 50: " << s.count(50) << endl;

    // Erase element by value
    s.erase(5);
    cout << "After erase(5): ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    // Erase using iterator
    it = s.find(15);
    if (it != s.end()) s.erase(it);
    cout << "After erase(iterator to 15): ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    // Lower bound and Upper bound
    s.insert(25);
    s.insert(30);

    cout << "Lower bound of 20: " << *s.lower_bound(20) << endl;  // >= 20
    cout << "Upper bound of 20: " << *s.upper_bound(20) << endl;  // > 20

    // Size and empty
    cout << "Size: " << s.size() << endl;
    cout << "Empty? " << (s.empty() ? "Yes" : "No") << endl;

    // Clear all elements
    s.clear();
    cout << "Size after clear: " << s.size() << endl;

    return 0;
}
