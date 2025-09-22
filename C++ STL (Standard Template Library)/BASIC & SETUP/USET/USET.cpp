#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;

   

    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
    
    // Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(10); // duplicate ignored
    us.emplace(30);

    cout << "Elements in unordered_set: ";
    for (auto x : us) cout << x << " "; // order not guaranteed
    cout << endl;

    // Find
    if (us.find(20) != us.end())
        cout << "20 found" << endl;

    // Count
    cout << "Count of 10: " << us.count(10) << endl; // 1

    // Erase
    us.erase(10);
    cout << "After erasing 10: ";
    for (auto x : us) cout << x << " ";
    cout << endl;

    // Size
    cout << "Size: " << us.size() << endl;

    // Swap with another unordered_set
    unordered_set<int> us2 = {100, 200};
    us.swap(us2);

    cout << "After swap (us): ";
    for (auto x : us) cout << x << " "; // 100 200
    cout << endl;

    // Clear
    us.clear();
    cout << "Size after clear: " << us.size() << endl;

    return 0;
}


