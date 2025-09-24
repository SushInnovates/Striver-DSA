#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 1. Declaration
    unordered_map<int, string> um;

    // 2. Insertion
    um[1] = "One";                     // Using []
    um.insert({2, "Two"});             // Using insert
    um.emplace(3, "Three");            // Using emplace

    // 3. Access elements
    cout << "um[1] = " << um[1] << endl;        // Access with []
    cout << "um.at(2) = " << um.at(2) << endl;  // Access with at()

    // 4. Iteration
    cout << "\nIterating unordered_map:" << endl;
    for (auto it : um) {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\nUsing iterators:" << endl;
    for (auto it = um.begin(); it != um.end(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }

    // 5. Search
    if (um.find(2) != um.end()) {
        cout << "\nKey 2 found: " << um[2] << endl;
    }

    // 6. Count
    cout << "Count of key 2: " << um.count(2) << endl; 
    cout << "Count of key 10: " << um.count(10) << endl; 

    // 7. Erase
    um.erase(2); // Erase by key
    cout << "\nAfter erasing key 2:" << endl;
    for (auto it : um) {
        cout << it.first << " -> " << it.second << endl;
    }

    auto it = um.find(3);
    if (it != um.end()) {
        um.erase(it); // Erase using iterator
    }

    cout << "\nAfter erasing iterator (key 3):" << endl;
    for (auto x : um) {
        cout << x.first << " -> " << x.second << endl;
    }

    // 8. Size and clear
    cout << "\nSize: " << um.size() << endl;
    um.clear();
    cout << "Size after clear: " << um.size() << endl;
    cout << "Empty? " << (um.empty() ? "Yes" : "No") << endl;

    // 9. Bucket & Load Factor (important in unordered_map)
    unordered_map<int, int> test;
    for (int i = 0; i < 10; i++) {
        test[i] = i * 10;
    }
    cout << "\nBuckets: " << test.bucket_count() << endl;
    cout << "Load Factor: " << test.load_factor() << endl;

    return 0;
}
