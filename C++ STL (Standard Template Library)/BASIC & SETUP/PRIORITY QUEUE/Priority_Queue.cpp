#include <iostream>
#include <queue>
using namespace std;

int main() {
    // ---------------- MAX HEAP ----------------
    priority_queue<int> maxPQ;

    // Insert elements
    maxPQ.push(10);
    maxPQ.push(20);
    maxPQ.emplace(5);

    cout << "Max Heap Top: " << maxPQ.top() << endl; // 20
    cout << "Size: " << maxPQ.size() << endl;       // 3

    // Remove element
    maxPQ.pop();
    cout << "Top after pop: " << maxPQ.top() << endl; // 10

    // Check empty
    if (maxPQ.empty())
        cout << "Max Heap is empty" << endl;
    else
        cout << "Max Heap is not empty" << endl;

    // ---------------- MIN HEAP ----------------
    priority_queue<int, vector<int>, greater<int>> minPQ;

    // Insert elements
    minPQ.push(10);
    minPQ.push(20);
    minPQ.emplace(5);

    cout << "Min Heap Top: " << minPQ.top() << endl; // 5
    cout << "Size: " << minPQ.size() << endl;       // 3

    // Remove element
    minPQ.pop();
    cout << "Top after pop: " << minPQ.top() << endl; // 10

    // ---------------- SWAP ----------------
    priority_queue<int> anotherPQ;
    anotherPQ.push(100);
    anotherPQ.push(200);

    cout << "Before swap - maxPQ top: " << maxPQ.top() << endl; // 10
    cout << "Before swap - anotherPQ top: " << anotherPQ.top() << endl; // 200

    maxPQ.swap(anotherPQ);

    cout << "After swap - maxPQ top: " << maxPQ.top() << endl;   // 200
    cout << "After swap - anotherPQ top: " << anotherPQ.top() << endl; // 10

    return 0;
}
