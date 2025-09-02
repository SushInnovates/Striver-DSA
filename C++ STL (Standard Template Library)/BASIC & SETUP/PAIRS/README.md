# 📘 Pairs in C++ STL  

## 🔹 What is a Pair?  
A **pair** in C++ is a container defined in the **Standard Template Library (STL)** that can store **two values** (may be of the same or different data types).  
It is defined in `<utility>` header.  

## 🔹 Why use Pair?
- To store two related values together (like coordinates, student roll no. & marks, etc.)
- Useful in DSA problems (especially maps, heaps, graphs).
- Supports comparisons (==, <, >) by default (compares first, then second if equal)

## 📝 Summary
1. pair<T1, T2> stores two values.
2. Access with .first and .second.
3. Can be nested or used in arrays/containers.
4. Supports comparison operators.

##🔹 Syntax:  
```cpp
pair<data_type1, data_type2> name;
```

##🔹Example
   pair<int, int> p1 = {1, 2};

