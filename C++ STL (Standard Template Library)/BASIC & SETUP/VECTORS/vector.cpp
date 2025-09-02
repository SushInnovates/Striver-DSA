#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector
    vector<int> v;

    // Adding elements
    v.push_back(10);        // Insert at end
    v.push_back(20);
    v.emplace_back(30);     // Faster than push_back
    v.push_back(40);

    cout << "Initial vector: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // Accessing elements
    cout << "Front element: " << v.front() << endl; //returns the first element
    cout << "Back element: " << v.back() << endl;   //returns the last element
    cout << "Element at index 2: " << v[2] << endl; //returns the specific element from the vector

    // Size of vector
    cout << "Size of vector: " << v.size() << endl; //returns the size of the vector

    // Iterating using index
    cout << "Iteration (index): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Iterating using iterator
    cout << "Iteration (iterator): ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Iterating using range-based loop
    cout << "Iteration (range-based): ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Removing last element
    v.pop_back();   //removes the last element
    cout << "After pop_back: "; 
    for (auto x : v) cout << x << " ";
    cout << endl;

    // Checking empty
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // Clearing vector
    v.clear();
    cout << "Vector cleared. Size: " << v.size() << endl;
    cout << "Is vector empty now? " << (v.empty() ? "Yes" : "No") << endl;

    return 0;
}
