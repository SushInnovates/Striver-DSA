# 📘 Unordered Map in C++ STL

## 🔹 What is a Unordered Map?
- An unordered_map is an associative container in C++ STL that stores elements in the form of key-value pairs.
- Unlike map, it does not store keys in sorted order. Instead, it uses hashing to provide average O(1) time complexity for insert, delete, and find operations.
- It is defined in the `<unordered_map>` header.

---

## 🔹 Why use Unordered Map?
- When fast access/search is more important than ordering.
- Provides average O(1) operations compared to O(log n) in map.
- Useful for problems involving frequency counts, lookups, and hashing-based queries.

---
## 🔹Common Function
```
| Function               | Description                                                   |
| ---------------------- | ------------------------------------------------------------- |
| `insert({key, value})` | Insert key-value pair                                         |
| `erase(key)`           | Erase element with given key                                  |
| `find(key)`            | Returns iterator to element with key, or `end()` if not found |
| `count(key)`           | Returns 1 if key exists, 0 otherwise                          |
| `begin() / end()`      | Iterator to start/end                                         |
| `size()`               | Number of elements                                            |
| `empty()`              | Checks if container is empty                                  |
| `clear()`              | Removes all elements                                          |


```
---
## 🔹 Summary
- Stores unique keys with associated values.
- No guaranteed order (keys may appear in random order).
- Faster than map for large datasets (on average).
- Common operations: insert(), erase(), find(), count(), size(), empty(),clear().

---

## 🔹 Syntax
```
unordered_map<KeyType, ValueType> name;


```
---
## 🔹 Example
```
    unordered_map<int, string> ump;
```
