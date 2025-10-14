# 💠 GCD (Greatest Common Divisor)

This program calculates the **GCD (Greatest Common Divisor)** of two numbers using the **Euclidean Algorithm** — one of the most efficient and fundamental algorithms in mathematics and DSA.

---

## 🧠 What is GCD?

The **GCD** (also known as **HCF — Highest Common Factor**) of two integers is the **largest number** that divides both numbers **without leaving a remainder**.

For example:
- GCD(12, 18) = 6  
- GCD(8, 20) = 4  
- GCD(7, 13) = 1 → (when GCD = 1, the numbers are **coprime**)

---

## ⚙️ Logic Used — Euclidean Algorithm

1. If `a > b`, replace `a` with `a % b`.  
2. Else, replace `b` with `b % a`.  
3. Repeat until either `a` or `b` becomes 0.  
4. The non-zero value is the **GCD**.

This algorithm works because the GCD of two numbers doesn’t change if the **larger number is replaced by its remainder when divided by the smaller one**.

---

## 🧩 Example

