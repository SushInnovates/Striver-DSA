# 🔢 Check Prime Number

This program determines whether a given number is **prime** or **not prime** using an optimized approach (checking divisors only up to √N).

---

## 🧠 What is a Prime Number?

A **Prime Number** is a number greater than 1 that has exactly **two distinct divisors** — **1** and **itself**.  
For example:
- `2, 3, 5, 7, 11` are prime numbers.  
- `4, 6, 8, 9, 10` are **not** prime numbers.

---

## ⚙️ Logic Used

1. Iterate `i` from `1` to `√N`.  
2. If `i` divides `N`, count both divisors (`i` and `N/i`).  
3. After the loop, if the **count of divisors = 2**, it’s **Prime**, else **Not Prime**.

This reduces unnecessary iterations and makes the algorithm efficient.

---

## 🧩 
