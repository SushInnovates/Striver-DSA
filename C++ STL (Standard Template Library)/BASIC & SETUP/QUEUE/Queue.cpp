#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Insert elements
    q.push(10);
    q.push(20);
    q.emplace(30);

    cout << "Initial Queue:" << endl;
    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30
    cout << "Size: " << q.size() << endl;   // 3
    cout << endl;

    // Modify front and back
    q.front() += 5;  // front becomes 15
    q.back() += 5;   // back becomes 35

    cout << "After modifying front and back:" << endl;
    cout << "Front: " << q.front() << endl; // 15
    cout << "Back: " << q.back() << endl;   // 35
    cout << endl;

    // Remove element
    q.pop(); // removes 15
    cout << "After pop:" << endl;
    cout << "Front: " << q.front() << endl; // 20
    cout << "Size: " << q.size() << endl;   // 2
    cout << endl;

    // Check if empty
    cout << "Is queue empty? " 
         << (q.empty() ? "Yes" : "No") << endl;
    cout << endl;

    // Swap with another queue
    queue<int> q2;
    q2.push(100);
    q2.push(200);

    q.swap(q2);

    cout << "After swapping with q2:" << endl;
    cout << "Front of q: " << q.front() << endl;   // 100
    cout << "Back of q: " << q.back() << endl;     // 200
    cout << "Front of q2: " << q2.front() << endl; // 20
    cout << "Back of q2: " << q2.back() << endl;   // 35

    return 0;
}
