# Alphabet Pattern Programs  

This repository contains C++ programs that print different alphabet-based patterns.  
Each program is in its own file (`main1.cpp`, `main2.cpp`), with explanation, logic, output, and complexity.  

---

## Pattern 18 – Reverse Alphabet Triangle (`main1.cpp`)  

### Description  
Prints a triangle of alphabets starting from a decreasing character each row, going up to D.
- The first row starts from D.
- Each subsequent row shifts the starting character one step backward (C, B, A).
- Characters in each row are printed sequentially until D.
---

## Logic Summary  
- Outer loop → runs from 0 to n-1 (controls rows).
- Inner loop → runs from starting character ('D' - i) up to 'D'.
- The starting character decreases by 1 each row.

---

### Complexity  
- **Time Complexity:** `O(n^2)`  
- **Space Complexity:** `O(1)`  

---

### Example Output (n=5)  






---

## Pattern 18 – Reverse Alphabet Triangle (Generalized) (`main2.cpp`)  

### Description  
 Prints a right-angled triangle of alphabets where:
- The last character of the triangle is always the n-th alphabet (e.g., if n=5 → last char is E).
- Each row begins with a decreasing character and continues up to the last character.
- For example, with n=5, the rows start from E, then D, then C, and so on, until A.
---

### Logic Summary  
1.  Compute the last character:
    -  `last = 'A' + (n-1)` (last alphabet to print).  
2.  Outer loop → runs from `0` to `n-1` (rows).  
3.  Inner loop → prints characters from `(last - i)` to `last`.
   - Row 0 → last only
   - Row 1 → last-1 to last
   - Row 2 → last-2 to last
   - … continues until row n-1.

---

### Complexity  
- **Time Complexity:** `O(n^2)`  
- **Space Complexity:** `O(1)`  

---

### Example Output (n=5)  
