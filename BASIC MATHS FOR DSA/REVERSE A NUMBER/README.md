# 🔁 Reverse a Number

### 🔹 What is “Reversing a Number”?
Reversing a number means rearranging its digits in opposite order.  
Example → `1234` becomes `4321`.

---

### 🔹 Why do we use it?
- Common step in many **math & number problems** (e.g., Palindrome check, Armstrong numbers).  
- Helps understand **digit extraction** and **modulus / division operations**.  
- Builds logic for **digit-based algorithms** in DSA.

---

### 🧠 **Logic Behind It**
We repeatedly extract the **last digit** of the number and append it to a new variable (ReverseNumber).

Steps:
1. Get the last digit using `Number % 10`.
2. Add it to `ReverseNumber = ReverseNumber * 10 + LastDigit`.
3. Remove last digit from number → `Number = Number / 10`.
4. Continue until `Number` becomes `0`.

---

### Complexity
```
| Type      | Complexity | Explanation                                                   |
| --------- | ---------- | ------------------------------------------------------------- |
| **Time**  | O(log₁₀ N) | Number is divided by 10 each step — loop runs once per digit. |
| **Space** | O(1)       | No extra data structure used.                                 |
```
---
### Summary
-  Uses modulus % and division /
-  Builds understanding of number manipulation
-  Common building block for Palindrome, Armstrong, and Digit-based problems.
 ---
