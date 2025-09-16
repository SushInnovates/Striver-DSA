# 📘 Stack in C++ STL

## 🔹 What is a Stack?
- A Stack is a container that follows the LIFO (Last In First Out) principle.
- The element inserted last is the first one to be removed.
- Defined in the <stack> header file.
- Internally, it can be implemented using deque, vector, or list.

---

## 🔹 Why use Stack?
- Useful in solving DSA problems like:
    - Expression evaluation (infix → postfix)
    - Balanced parentheses
    - Undo/Redo operations
    - DFS in Graphs
- Provides restricted access (only top element accessible).

---

## 🔹Summary
1. Stack follows LIFO principle.
2. Supports push, pop, top, size, empty, swap.
3. Very important for recursion, backtracking, graph algorithms, expression evaluation.

## 🔹 Common Functions
```
| Function      | Description                                                 |
| ------------- | ----------------------------------------------------------- |
| `push(x)`     | Inserts element `x` at the top                              |
| `emplace(x)`  | Inserts element `x` (faster than push, constructs in place) |
| `pop()`       | Removes the top element                                     |
| `top()`       | Returns the top element                                     |
| `size()`      | Returns number of elements                                  |
| `empty()`     | Returns whether stack is empty                              |
| `swap(other)` | Swaps contents with another stack                           |

```

## 🔹 Syntax
```cpp
#include <stack>
stack<int> dq;
```
## 🔹Example
```
stack <int> D;
```
