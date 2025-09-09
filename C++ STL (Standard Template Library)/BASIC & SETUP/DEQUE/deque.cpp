#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Creating a deque
    deque<int> dq;

    // Adding elements
    dq.push_back(10);        // add at back
    dq.push_front(20);       // add at front
    dq.emplace_back(30);     // efficient insert at back
    dq.emplace_front(40);    // efficient insert at front

    cout << "Deque after push operations: ";
    for (auto x : dq) cout << x << " ";
    cout << endl;

    // Accessing elements
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;
    cout << "Element at index 1 (using at()): " << dq.at(1) << endl;

    // Insert at specific position
    dq.insert(dq.begin() + 1, 100);
    cout << "After insert at index 1: ";
    for (auto x : dq) cout << x << " ";
    cout << endl;

    // Erase specific element
    dq.erase(dq.begin() + 2);
    cout << "After erase at index 2: ";
    for (auto x : dq) cout << x << " ";
    cout << endl;

    // Iteration using iterators
    cout << "Using iterator: ";
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iteration
    cout << "Using reverse iterator: ";
    for (auto it = dq.rbegin(); it != dq.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Pop operations
    dq.pop_back();
    dq.pop_front();
    cout << "After pop operations: ";
    for (auto x : dq) cout << x << " ";
    cout << endl;

    // Size and empty check
    cout << "Size: " << dq.size() << endl;
    cout << "Is empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // Swap two deques
    deque<int> dq2 = {111, 222, 333};
    dq.swap(dq2);

    cout << "dq after swap: ";
    for (auto x : dq) cout << x << " ";
    cout << endl;

    cout << "dq2 after swap: ";
    for (auto x : dq2) cout << x << " ";
    cout << endl;

    // Clear
    dq.clear();
    cout << "Size after clear: " << dq.size() << endl;

    return 0;
}
