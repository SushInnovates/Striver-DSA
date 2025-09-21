# 📘 Multiset in C++ STL

## 🔹 What is a Multiset?
A **Multiset** in C++ STL is an **ordered container** that stores elements in a **sorted order**, but **allows duplicate values**.  
It is implemented using **balanced BST (Red-Black Tree)**.

---

## 🔹 Why use Multiset?
- Maintains sorted order automatically.
- Allows **duplicate elements** (unlike `set`).
- Useful when frequency of elements matters.

---


## 🔹Common Function
```
| Function         | Description                                    |
| ---------------- | ---------------------------------------------- |
| `insert(x)`      | Inserts element `x` (duplicates allowed)       |
| `emplace(x)`     | Inserts faster (constructs in-place)           |
| `erase(x)`       | Removes **all occurrences** of `x`             |
| `erase(it)`      | Removes only the element at iterator `it`      |
| `find(x)`        | Returns iterator to `x` if found, else `end()` |
| `count(x)`       | Returns number of occurrences of `x`           |
| `lower_bound(x)` | Returns iterator to first element `>= x`       |
| `upper_bound(x)` | Returns iterator to first element `> x`        |
| `size()`         | Returns number of elements                     |
| `empty()`        | Checks if multiset is empty                    |
| `clear()`        | Removes all elements                           |

```

## 🔹 Summary
- Multiset stores elements in sorted order but allows duplicates.
- Good for problems where frequency of elements matters.
- Operations (insert, erase, find) take O(log n) time.

## 🔹 Syntax
```
multiset<data_type> ms;
```

## 🔹 Example
```
multiset<int> D;
```
