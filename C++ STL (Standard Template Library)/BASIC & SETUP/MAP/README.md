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
