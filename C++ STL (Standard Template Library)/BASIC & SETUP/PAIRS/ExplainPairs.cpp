#include <iostream>
#include <utility> // for pair
using namespace std;

int main() {
    // Basic pair
    pair<int, int> p1 = {1, 2};
    cout << "p1: " << p1.first << " " << p1.second << endl;

    // Nested pair
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "p2: " << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // Pair with different data types
    pair<string, double> p3 = {"Pi", 3.14};
    cout << "p3: " << p3.first << " " << p3.second << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << "Array of pairs:" << endl;
    for(auto pr : arr) {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}
