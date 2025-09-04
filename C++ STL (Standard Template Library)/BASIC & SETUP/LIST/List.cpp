#include <iostream>
#include <list>
using namespace std;

int main() {
    // Creating a list
    list<int> l1;          // empty list
    list<int> l2(5, 100);  // {100, 100, 100, 100, 100}

    // Adding elements
    l1.push_back(1);       // insert at end
    l1.push_front(2);      // insert at beginning
    l1.push_front(2);      // insert at beginning
    l1.emplace_back(3);    // faster insertion at end
    l1.emplace_front(4);   // faster insertion at front

    // Iterating
    cout << "List elements: ";
    for (auto it = l1.begin(); it != l1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove element by value
    l1.remove(2);   // removes all occurrences of 2

    // Insert at specific position
    auto it = l1.begin();
    advance(it, 1);         // move iterator forward
    l1.insert(it, 5);       // insert 5 at position 2

    // Erase element
    it = l1.begin();
    l1.erase(it);           // erase first element

    // Size
    cout << "Size: " << l1.size() << endl;

    // Reverse
    l1.reverse();
    cout << "Reversed: ";
    for (auto x : l1) cout << x << " ";
    cout << endl;

    // Sort
    l1.sort();
    cout << "Sorted: ";
    for (auto x : l1) cout << x << " ";
    cout << endl;

    // Clear
    l1.clear();
    cout << "Size after clear: " << l1.size() << endl;


    return 0;
    //rest functions same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
