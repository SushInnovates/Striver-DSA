# 📘 MultiMap in C++ STL

## 🔹 What is a MultiMap?
- A multimap is an associative container in C++ STL that stores elements as key-value pairs.
Unlike map, a multimap allows duplicate keys.
- Defined in the `<map>` header.

---

## 🔹 Why use MultiMap?
- To store multiple values for the same key.
- Useful when keys are not unique but you still want ordered storage.
- Supports operations like insertion, deletion, search, and range queries efficiently.
- Automatically sorted by key (Like Map).

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
- Stores key-value pairs (pair<const Key, T>).
- Keys are automatically sorted.
- Duplicate keys are allowed.
- Access elements via iterators (begin(), end(), rbegin(), rend()).
- Common operations: insert(), erase(), find(), count(), lower_bound(), upper_bound(), size(), empty().

---

## 🔹 Syntax
```
multimap<KeyType, ValueType> name;

```
---
## 🔹 Example
```
multimap<int, string> mp;
```
