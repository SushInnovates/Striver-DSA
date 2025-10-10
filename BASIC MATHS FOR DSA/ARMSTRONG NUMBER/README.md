# 💫 Armstrong Number in C++

## 📘 Description
This program checks whether a given number is an **Armstrong Number** or not.  
An **Armstrong number** (also known as a **Narcissistic number**) is a number that is equal to the sum of the cubes of its digits.  
For example:
- 153 → (1³ + 5³ + 3³ = 153)
- 370 → (3³ + 7³ + 0³ = 370)

If the sum of cubes of digits equals the original number, it is an Armstrong number.

---

## 🧠 Logic Breakdown
1. Take input `Number` from the user.  
2. Store a duplicate copy of it (`dup = Number`) for later comparison.  
3. Extract each digit using the modulus operator `% 10`.  
4. Cube each digit and add it to a running sum.  
5. Divide the number by 10 in each iteration to move to the next digit.  
6. After the loop ends, compare the final sum with the original number (`dup`).  
7. If both are equal → Armstrong Number ✅  
   Else → Not an Armstrong Number ❌  

---

## 🧮 Dry Run
| Step | Number | LastDigit | Sum (LastDigit³) | Updated Number |
|------|---------|------------|------------------|----------------|
| 1 | 153 | 3 | 27 | 15 |
| 2 | 15 | 5 | 27 + 125 = 152 | 1 |
| 3 | 1 | 1 | 152 + 1 = 153 | 0 |
| ✅ | — | — | Final Sum = 153 | — |

Since **Sum = Original Number**, it's **Armstrong**.

---
## ⏱️ Time & Space Complexity
```
| Type                 | Complexity    | Explanation                                                |
| -------------------- | ------------- | ---------------------------------------------------------- |
| **Time Complexity**  | `O(log₁₀(N))` | Each iteration divides `N` by 10 → number of digits in `N` |
| **Space Complexity** | `O(1)`        | Only a few integer variables used                          |
```
---
## 🧾 Summary
```
| Concept               | Description                             |
| --------------------- | --------------------------------------- |
| **Topic**             | Armstrong Number                        |
| **Language**          | C++                                     |
| **Approach**          | Iterative (Digit Extraction & Cube Sum) |
| **Best Case Example** | 153, 370, 371, 407                      |
| **Complexity**        | O(log₁₀N) Time, O(1) Space              |
```
