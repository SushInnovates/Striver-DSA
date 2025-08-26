# Pattern 19 – Hollow Double Pyramid (Butterfly Style)

---
## Description
Prints a symmetric pattern made of two mirrored triangles (upper and lower part).
- The top half decreases stars on both sides while increasing spaces in the middle.
- The bottom half increases stars on both sides while decreasing spaces in the middle.
- Forms a butterfly/double pyramid–like figure

---
## Logic Summary
- First half (i = 0 → n-1):
    - Print (n - i) stars → left side.
    - Print 2*i spaces → middle gap.
    - Print (n - i) stars → right side.

- Second half (i = 1 → n):
    - Print i stars → left side.
    - Print (2*n - 2) spaces → middle gap.
    - Print i stars → right side.
 
---

## Complexity
- Time Complexity: O(n^2)
- Space Complexity: O(1)

---

## Example output (n = 5)
<img width="221" height="259" alt="Image" src="https://github.com/user-attachments/assets/4380cecd-2130-40be-9e74-3bc9aaeec145" />
