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
| Function            | Description                                    |
| ------------------- | ---------------------------------------------- |
| `insert()`          | Insert a key-value pair                        |
| `erase(key)`        | Remove all elements with the given key         |
| `find(key)`         | Returns iterator to **first element** with key |
| `count(key)`        | Returns number of elements with the key        |
| `lower_bound(key)`  | Iterator to **first element >= key**           |
| `upper_bound(key)`  | Iterator to **first element > key**            |
| `begin() / end()`   | Iterator to start/end                          |
| `rbegin() / rend()` | Reverse iterator to start/end                  |
| `size()`            | Returns number of elements                     |
| `empty()`           | Checks if multimap is empty                    |

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
