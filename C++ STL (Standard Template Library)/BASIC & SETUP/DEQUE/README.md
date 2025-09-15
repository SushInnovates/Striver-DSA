# 📘 Deque in C++ STL

## 🔹 What is a Deque?
- `deque` (Double Ended Queue) is a **sequential container** in STL.
- It allows **insertion and deletion from both front and back** in **O(1) time**.
- Internally implemented as **dynamic arrays of fixed-size segments** (not contiguous like vectors).
- Defined in `<deque>` header.

---

## 🔹 Why use Deque?
- More flexible than vector (can push/pop from both ends).
- Efficient for **sliding window problems**, queues with both-side operations.
- Supports **random access** like vectors (`at()`, `[]`).
- Useful when you need **fast insertions/removals at both front and back**.

---

## 🔹Summary
1. deque = dynamic array with efficient front & back operations.
2. Supports random access like vector.
3. Best used when frequent insertions/removals are required at both ends.

## 🔹 Common Functions
```
| Function           | Description                                    |
| ------------------ | ---------------------------------------------- |
| `push_back(x)`     | Insert element at back                         |
| `push_front(x)`    | Insert element at front                        |
| `emplace_back(x)`  | Construct and insert element at back (faster)  |
| `emplace_front(x)` | Construct and insert element at front (faster) |
| `pop_back()`       | Remove last element                            |
| `pop_front()`      | Remove first element                           |
| `insert(pos, x)`   | Insert element at given position               |
| `erase(pos)`       | Erase element at given position                |
| `clear()`          | Remove all elements                            |
| `swap(dq2)`        | Swap contents with another deque               |
| `front()`          | Access first element                           |
| `back()`           | Access last element                            |
| `at(i)`            | Access element at index `i` with bounds check  |
| `size()`           | Get number of elements                         |
| `empty()`          | Check if deque is empty                        |
```

## 🔹 Syntax
```cpp
#include <deque>
deque<int> dq;
```
## 🔹Example
```
deque <int> D1;
```
