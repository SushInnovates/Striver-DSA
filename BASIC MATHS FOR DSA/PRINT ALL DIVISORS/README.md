# 🔢 Print All Divisors of a Number in C++

## 📘 Description
This program prints **all divisors (factors)** of a given number `n`.  
A **divisor** is a number that divides `n` completely without leaving any remainder.  
For example:  
If `n = 36`, the divisors are `1 2 3 4 6 9 12 18 36`.

---

## 🧠 Logic Explanation
A number `i` is a **divisor** of `n` if `n % i == 0`.

There are **two approaches** to solve this problem:

---

## 🧩 Logic Steps (Approach 1:
- Run a loop from 1 to n.
- For every number i, check if it divides n completely (n % i == 0).
- If yes, print it.

## 🧩 Time & Space Complexity
```
| Type                 | Complexity | Explanation                           |
| -------------------- | ---------- | ------------------------------------- |
| **Time Complexity**  | `O(N)`     | Loops through all numbers from 1 to N |
| **Space Complexity** | `O(1)`     | Only uses constant space              |
```

## 🧩 Logic Steps (Approach 2:
- Loop only till √n.
- Whenever a divisor i is found, store both i and n/i in a list.
- Sort and print the list to get all divisors in ascending order.

## 🧩 Time & Space Complexity
```
| Type                 | Complexity    | Explanation                  |
| -------------------- | ------------- | ---------------------------- |
| **Time Complexity**  | `O(√N log√N)` | √N loop + sorting step       |
| **Space Complexity** | `O(√N)`       | Storing divisors in a vector |
```

## ⭐ Summary
```
| Concept            | Description             |
| ------------------ | ----------------------- |
| **Topic**          | Print All Divisors      |
| **Language**       | C++                     |
| **Approach 1**     | Naive (O(N))            |
| **Approach 2**     | Optimized (O(√N log√N)) |
| **Input Example**  | 36                      |
| **Output Example** | 1 2 3 4 6 9 12 18 36    |
```
