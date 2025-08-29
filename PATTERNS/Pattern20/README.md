# Pattern 20 – Symmetric Double Triangle

## Description
Prints two mirrored right-angled triangles separated by spaces.
- The upper half grows stars on both sides while spaces shrink.
- The lower half shrinks stars on both sides while spaces grow.

## Logic Summary
1. Total Rows: 2*n - 1
2. Stars per Row:
  -  If i <= n → stars = i
  -  If i > n → stars = 2*n - i

3. Spaces:
  - Initially 2*n - 2
  - Decrease by 2 until middle row
  - Increase by 2 after middle row

### Formula:
- Stars = min(i, 2*n - i)
- Spaces adjust dynamically (start 2*n - 2, then ±2 each row).

## Complexity
- Time Complexity: O(n^2) → nested loops for stars + spaces.
- Space Complexity: O(1) → constant extra space.

## Example Output (n = 5)
<img width="198" height="224" alt="Image" src="https://github.com/user-attachments/assets/2d911ab1-73a4-4809-9104-a7ceed370e49" />
