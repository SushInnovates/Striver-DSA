# 📘 List in C++ STL  

## 🔹 What is a List?  
- `std::list` is a **doubly linked list** implementation in C++ STL.  
- Unlike vectors, lists allow **fast insertion and deletion** at both ends and at specific positions.  
- Elements are **not stored contiguously** (unlike arrays/vectors).  

---

## 🔹 Why use List?  
- Efficient insertion and deletion in the middle of the container.  
- Supports bidirectional iteration.  
- Useful in scenarios where frequent modifications are needed.  

---
## Common Functions
   ### Insertion And Deletion
   ```
l.push_back(10);       // Insert at end
l.push_front(5);       // Insert at beginning
l.emplace_back(20);    // Faster insert at end
l.emplace_front(1);    // Faster insert at beginning
l.insert(it, 15);      // Insert 15 at iterator position
l.erase(it);           // Erase element at iterator
l.remove(10);          // Remove ALL occurrences of 10
  ```
   ### Access
   ```
l.front();   // First element
l.back();    // Last element
```
  ### Size And Clear
  ```
l.size();    // Number of elements
l.empty();   // Check if list is empty
```
## 🔹 Syntax  
```cpp
#include <list>
list<data_type> name;  
```
## Example
```
list<int> D;
```
