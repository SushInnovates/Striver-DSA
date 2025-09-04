#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector
    vector<int> v;

    // Adding elements
    v.push_back(1);          // push_back -> adds element at end
    v.emplace_back(2);       // emplace_back -> faster, constructs in place

    // Initializing vector with size and values
    vector<int> v2(5, 100);  // {100, 100, 100, 100, 100}

    // Copying vector
    vector<int> v3(v2);      // Copy constructor

    // Iterating through vector
    cout << "Elements in v: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Using iterators
    cout << "Using iterator on v2: ";
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based for loop
    cout << "Range-based loop on v3: ";
    for (auto x : v3) cout << x << " ";
    cout << endl;

    // Insert function
    v.insert(v.begin(), 10);         // Insert 10 at beginning
    v.insert(v.begin() + 1, 2, 20);  // Insert 20 two times at index 1
    cout << "After insert: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // Erase function
    v.erase(v.begin());              // Remove first element
    if (v.size() >= 2)
        v.erase(v.begin(), v.begin() + 2);  // Remove first 2 elements
    cout << "After erase: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // Assign function (copying values)
    vector<int> v4;
    v4.assign(v2.begin(), v2.end()); // Copy elements from v2
    cout << "v4 after assign (copied from v2): ";
    for (auto x : v4) cout << x << " ";
    cout << endl;

    // Other functions
    cout << "Front: " << v2.front() << endl;
    cout << "Back: " << v2.back() << endl;
    cout << "Size: " << v2.size() << endl;
    cout << "Capacity: " << v2.capacity() << endl;

    // Iteration using rbegin() & rend()
    cout << "Vector in reverse using rbegin/rend: ";
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Iteration using cbegin() & cend() (read-only)
    cout << "Vector using cbegin/cend: ";
    for (auto it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Iteration using crbegin() & crend() (read-only reverse)
    cout << "Vector using crbegin/crend: ";
    for (auto it = v.crbegin(); it != v.crend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Pop back
    v2.pop_back();
    cout << "After pop_back: ";
    for (auto x : v2) cout << x << " ";
    cout << endl;

    // Clear
    v2.clear();
    cout << "Size after clear: " << v2.size() << endl;

    return 0;
}

