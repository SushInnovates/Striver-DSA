# 📘 Map in C++ STL

## 🔹 What is a Map?
-  A `map` in C++ is an **ordered associative container** that stores elements in **key-value pairs**.
-  Each key is unique and automatically arranged in  sorted order (ascending by default).
-  Internally implemented using a self-balancing BST (Red-Black tree).
-  Defined in the `<map>` header.
---
## 🔹 What use a Map?
- Provides fast Searching, insertion and deletion in o(log n).
- Maintains sorted order of keys automatically.
- useful when we want to associate unique identifiers(keys) with values(like dictionaries).
- Example : Storing Student roll numbers(keys) with their names (values)

---
## 🔹 Summary
- Stores key-value pairs (key -> value).
- Keys are unique and automatically sorted.
- Supports common operations: insert(), emplace(), find(), erase(), count(), lower_bound(), upper_bound().
- Can have pair as key or pair as value.
- o(log n)
- Balanced BST (Red-Black tree).
- Used when we need sorted key-value pairs.
-  Supports iteration using iterators (begin(), end()).
---

## 🔹 Common Functions
```
| Function           | Description                                 | Example                                  |
| ------------------ | ------------------------------------------- | ---------------------------------------- |
| `insert()`         | Inserts a key-value pair                    | `mp.insert({2, 20});`                    |
| `emplace()`        | Inserts in-place (faster)                   | `mp.emplace(3, 30);`                     |
| `find(key)`        | Returns iterator to key                     | `auto it = mp.find(2);`                  |
| `count(key)`       | Checks if key exists                        | `mp.count(2)` → 1 if exists, 0 otherwise |
| `erase(key)`       | Removes element by key                      | `mp.erase(2);`                           |
| `erase(iterator)`  | Removes element at iterator                 | `mp.erase(it);`                          |
| `lower_bound(key)` | Returns iterator to first element **≥ key** | `mp.lower_bound(2);`                     |
| `upper_bound(key)` | Returns iterator to first element **> key** | `mp.upper_bound(2);`                     |
| `size()`           | Returns number of elements                  | `mp.size();`                             |
| `empty()`          | Checks if map is empty                      | `mp.empty();`                            |

```
---

## 🔹 Syntax
```
map<key_type,value_type>mp;
```

## 🔹 Example
```
map<int,string>mp;

map<int, int> mpp;
mpp[1] = 2;
mpp.emplace(3, 1);

```
