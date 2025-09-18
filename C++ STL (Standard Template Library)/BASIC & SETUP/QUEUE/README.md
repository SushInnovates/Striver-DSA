# 📘 Queue in C++ STL

## 🔹 What is a Queue?
- A Queue is a container that follows the FIFO (First In First Out) principle.
- The element inserted first is the first one to be removed.
- Defined in the ```<queue>``` header file.
- Internally, it is usually implemented using deque or list.

---

## 🔹 Why use Queue?
- Useful in solving DSA problems like:
    - BFS (Breadth First Search) in graph/trees.
    - Scheduling problems (CPU scheduling, task management)
    - Buffer handling (IO tasks, producer-consumer problems


---

## 🔹Summary
1. Queue follows FIFO principle.
2. Supports push, emplace, pop, front, back, size, empty, swap.
3. Very important in graphs (BFS), scheduling, buffering, and task queues.

## 🔹 Common Functions
```
| Function      | Description                                       |
| ------------- | ------------------------------------------------- |
| `push(x)`     | Inserts element `x` at the back                   |
| `emplace(x)`  | Inserts element `x` (constructs in place, faster) |
| `pop()`       | Removes element from the front                    |
| `front()`     | Returns the first element                         |
| `back()`      | Returns the last element                          |
| `size()`      | Returns number of elements                        |
| `empty()`     | Returns whether queue is empty                    |
| `swap(other)` | Swaps contents with another queue                 |


```

## 🔹 Syntax
```cpp
#include <queue>
queue<data_type> name;
```
## 🔹Example
```
queue <int> D;
```
