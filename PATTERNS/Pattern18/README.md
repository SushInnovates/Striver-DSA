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

## Pattern 18 – Inverted Alphabet Triangle (`main2.cpp`)  

### Description  
Prints an inverted alphabet triangle starting from the last character (`'A' + (n-1)`).  
Each row starts with decreasing letters but always ends at the last character.  

---

### Logic Summary  

**Type – 0-based loop**  
- Calculate `last = 'A' + (n-1)` (last alphabet to print).  
- Outer loop → runs from `0` to `n-1` (rows).  
- Inner loop → prints characters from `(last - i)` to `last`.  

---

### Complexity  
- **Time Complexity:** `O(n^2)`  
- **Space Complexity:** `O(1)`  

---

### Example Output (n=5)  
