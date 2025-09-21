# 📘 Set in C++ STL

## 🔹 What is a Set?
A **Set** in C++ STL is an **ordered container** that stores **unique elements** in a **sorted order** (by default ascending).  
It is implemented using **balanced BST (Red-Black Tree)**.

---

## 🔹 Why use Set?
- Automatically stores elements in sorted order.
- Removes duplicates automatically.
- Useful in DSA problems (finding unique elements, maintaining sorted data, etc.).

---


## 🔹 Common Function
```
| Function         | Description                                    |
| ---------------- | ---------------------------------------------- |
| `insert(x)`      | Inserts an element `x` into the set            |
| `emplace(x)`     | Faster insertion (constructs in-place)         |
| `erase(x)`       | Removes element `x` if present                 |
| `erase(it)`      | Removes element at iterator `it`               |
| `find(x)`        | Returns iterator to `x` if found, else `end()` |
| `count(x)`       | Returns `1` if element exists, else `0`        |
| `lower_bound(x)` | Returns iterator to first element `>= x`       |
| `upper_bound(x)` | Returns iterator to first element `> x`        |
| `size()`         | Returns number of elements                     |
| `empty()`        | Checks if set is empty                         |
| `clear()`        | Removes all elements                           |

```
## 🔹 Summary

- Set stores unique elements in sorted order.
- Provides logarithmic complexity (O(log n)) for insertion, deletion, and search.
- Useful for problems requiring uniqueness + sorted structure.


## 🔹 Syntax
```
set<data_type> setName;
```

## 🔹  Example
```
set <int> D;
```
