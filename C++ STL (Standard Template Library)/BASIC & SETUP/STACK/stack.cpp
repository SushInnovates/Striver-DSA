#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Creating a stack of integers
    stack<int> st;

    // Push elements
    st.push(10);   // push adds element on top
    st.push(20);
    st.emplace(30); // emplace is faster (constructs in place)

    cout << "Top element: " << st.top() << endl; // 30

    // Size of stack
    cout << "Size: " << st.size() << endl;

    // Pop element
    st.pop(); // removes top (30)

    cout << "Top after pop: " << st.top() << endl; // 20

    // Check empty
    if (st.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    // Swapping two stacks
    stack<int> st2;
    st2.push(100);
    st2.push(200);

    st.swap(st2);

    cout << "Top after swap (st): " << st.top() << endl; // 200
    cout << "Top after swap (st2): " << st2.top() << endl; // 20

    return 0;
}
