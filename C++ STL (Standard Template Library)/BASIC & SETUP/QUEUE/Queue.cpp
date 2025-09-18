#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Insert elements
    q.push(10);
    q.push(20);
    q.emplace(30);

    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element: " << q.back() << endl;   // 30
    cout << "Size: " << q.size() << endl;           // 3

    // Remove element
    q.pop();
    cout << "Front after pop: " << q.front() << endl; // 20

    // Check empty
    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    // Swap with another queue
    queue<int> q2;
    q2.push(100);
    q2.push(200);

    q.swap(q2);

    cout << "Front after swap (q): " << q.front() << endl;   // 100
    cout << "Front after swap (q2): " << q2.front() << endl; // 20

    return 0;
}
