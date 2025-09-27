# 📘 Extra (Algorithms) in C++ STL

## 🔹 What is "Extra (Algorithms)"?
Apart from standard containers (vector, list, map, etc.), the C++ STL also provides a collection of **helper functions** in the `<algorithm>` header.  
These are used for **sorting, searching, counting bits, generating permutations**, and more.  

---

## 🔹 Why use them?
- Save time (no need to write sorting or searching from scratch).
- Highly optimized (faster than manual implementation).
- Makes code shorter, cleaner, and easier to maintain.
- Covers many common operations used in DSA problems.

---

## 🔹 Common Functions
```
| Function                           | Description                                               |
| ---------------------------------- | --------------------------------------------------------- |
| `sort(start, end)`                 | Sorts the range in ascending order                        |
| `sort(start, end, greater<int>())` | Sorts the range in descending order                       |
| `sort(start, end, comp)`           | Sorts using custom comparator                             |
| `__builtin_popcount(x)`            | Counts number of 1s in binary representation of int       |
| `__builtin_popcountll(x)`          | Counts number of 1s in binary representation of long long |
| `next_permutation(start, end)`     | Generates next lexicographical permutation                |
```
---
## 🔹 Summary
- `sort()` – Sorts arrays or vectors.
- `greater<int>()` – Sort in descending order.
- `custom comparator` – Define your own sorting logic.
- `__builtin_popcount()` – Count set bits in an integer (int).
- `__builtin_popcountll()` – Count set bits in a long long.
- `next_permutation()` – Generate the next lexicographical permutation of a string or array.

---

## 🔹 Syntax
```
// Sort an array
sort(arr, arr + n);  

// Sort in descending
sort(arr, arr + n, greater<int>());  

// Custom comparator
bool comp(pair<int,int> a, pair<int,int> b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
}
sort(arr, arr + n, comp);

// Built-in functions
int cnt = __builtin_popcount(x);      // for int
int cntLL = __builtin_popcountll(y);  // for long long

// Next permutation
string s = "123";
do {
    cout << s << endl;
} while (next_permutation(s.begin(), s.end()));
```
---
## 🔹 Example 


## 🔹Note
```
(it is implemented on previous algorithms like pair vector etc)
```
