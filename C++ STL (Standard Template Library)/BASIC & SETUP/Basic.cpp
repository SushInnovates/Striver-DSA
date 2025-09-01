#include <iostream>      // For input/output
#include <vector>        // For dynamic arrays
#include <utility>       // For pairs
#include <algorithm>     // For sorting and other algorithms
#include <set>           // For ordered unique elements
#include <map>           // For key-value pairs
using namespace std;

int main() {
    // Basic I/O
    cout << "Welcome to STL!" << endl;

    // Vector example
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    v.emplace_back(50);  // Faster than push_back

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}
