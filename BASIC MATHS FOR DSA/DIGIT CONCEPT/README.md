# 🧮 COUNT DIGITS

This folder contains solutions for counting the total number of digits in a given number using two different methods.

---

## 📘 Topics Covered
- Count digits using **Logarithmic Method**
- Count digits using **Iterative (Division) Method**

---

## ⚙️ Concepts Used
- `log10()` function from `<cmath>`
- While loop and modulus `%` operator
- Typecasting and integer division

---

## 🧩 Explanation
1️⃣ **Logarithmic Method:**  
   Uses the formula `log10(n) + 1` to calculate digits directly in O(1) time.

2️⃣ **Iterative Method:**  
   Repeatedly divides the number by 10 and counts the number of steps until it becomes 0.

---

## 🧠 Example
**Input:** `12345`  
**Output:** `Number of digits: 5`

---

## ⏱️ Time & Space Complexity
**Time Complexity :**O(log₁₀ N)

---

## 📂 Files
| File Name | Description |
|------------|-------------|
| `DigitCount2.cpp` | Count digits using logarithmic method |
| `DigitCount1.cpp` | Count digits using iterative division method |

---

## 🏁 Conclusion
Both methods are efficient for counting digits —  
Logarithmic is faster, while Iterative helps understand the process clearly.

---
