# 📘 Unordered Set in C++ STL

## 🔹 What is an Unordered Set?
An **unordered_set** in C++ is an **unordered associative container** that stores **unique elements**.  
It uses **hashing** internally (Hash Table), so:
- Elements are **not stored in sorted order**.
- Average time complexity for insertion, deletion, search is **O(1)**.

---

## 🔹 Why use Unordered Set?
- Faster operations than `set` (on average).
- Useful when **order doesn’t matter** but uniqueness is required.
- Great for frequency checks, lookups, hashing-based problems.

---

## 🔹 Common Functions
```
| Function     | Description                                    |
| ------------ | ---------------------------------------------- |
| `insert(x)`  | Inserts element `x` (if not already present)   |
| `emplace(x)` | Faster insertion, constructs in-place          |
| `erase(x)`   | Removes element `x` (if exists)                |
| `erase(it)`  | Removes element at iterator                    |
| `find(x)`    | Returns iterator to `x` if found, else `end()` |
| `count(x)`   | Returns `1` if `x` is present, else `0`        |
| `size()`     | Returns number of elements                     |
| `empty()`    | Checks if empty                                |
| `clear()`    | Removes all elements                           |
| `swap()`     | Swaps contents with another unordered\_set     |
```
---
## 🔹Summary
- unordered_set stores unique elements only (no duplicates).
- No guaranteed order (depends on hash function).
- Operations are O(1) average, O(n) worst case.
- Use it when order doesn’t matter but fast lookup is needed.

---
## 🔹 Syntax
```
unordered_set<data_type> us;
```
## 🔹 Example
```
 unordered_set<int> us;
```
