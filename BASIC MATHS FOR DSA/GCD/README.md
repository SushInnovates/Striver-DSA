# 💠 GCD (Greatest Common Divisor)
## 📘 Introduction
This program calculates the **GCD (Greatest Common Divisor)** of two numbers using the **Euclidean Algorithm** — one of the most efficient and fundamental algorithms in mathematics and DSA.

---

## 🧠 What is GCD?

The **GCD** (also known as **HCF — Highest Common Factor**) of two integers is the **largest number** that divides both numbers **without leaving a remainder**.

For example:
- GCD(12, 18) = 6  
- GCD(8, 20) = 4  
- GCD(7, 13) = 1 → (when GCD = 1, the numbers are **coprime**)

---

## ⚡ Euclidean Algorithm

## 🧠 Concept
The **Euclidean Algorithm** is a very efficient method to compute the GCD based on the principle that:
> The GCD of two numbers `a` and `b` is the same as the GCD of `b` and `a % b`.

That means:
```
gcd(a, b) = gcd(b, a % b)
until `b` becomes 0, then  

```

## Example
```
a = 48, b = 18

Step 1: gcd(48, 18) → gcd(18, 48 % 18) = gcd(18, 12)
Step 2: gcd(18, 12) → gcd(12, 18 % 12) = gcd(12, 6)
Step 3: gcd(12, 6) → gcd(6, 12 % 6) = gcd(6, 0)
Answer: GCD = 6

```
## ⚙️ Logic Used — Euclidean Algorithm

1. If `a > b`, replace `a` with `a % b`.  
2. Else, replace `b` with `b % a`.  
3. Repeat until either `a` or `b` becomes 0.  
4. The non-zero value is the **GCD**.

This algorithm works because the GCD of two numbers doesn’t change if the **larger number is replaced by its remainder when divided by the smaller one**.

---

## 🧮 Time Complexity

- **O(log(min(a, b)))** → very efficient due to the Euclidean property.  
- **Space Complexity:** **O(1)** → constant space.

---
## 📘 Summary
```
| Property             | Description                                             |
| -------------------- | ------------------------------------------------------- |
| **Concept**          | Greatest Common Divisor (GCD) using Euclidean Algorithm |
| **Alternate Name**   | HCF (Highest Common Factor)                             |
| **Time Complexity**  | O(log(min(a, b)))                                       |
| **Space Complexity** | O(1)                                                    |
| **STL Function**     | `gcd(a, b)` in `<numeric>` header                       |
| **Use Case**         | Foundational for LCM, number theory, and cryptography   |

```
## 🧠 Key Takeaways
-  Euclidean Algorithm is the fastest way to compute GCD.
-  Works for both positive integers and large values efficiently.
-  Recursive and Iterative methods give the same result, only differing in implementation.
