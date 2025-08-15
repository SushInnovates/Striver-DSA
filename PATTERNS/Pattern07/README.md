# Pattern 7 – Star Pyramid

## Description
Prints a centered pyramid of stars with n rows.  
Each row contains an odd number of stars (1, 3, 5 …) to form a pyramid shape.

## Logic Summary

*Type 1 – 0-based loop*
- Outer loop → runs from 0 to n-1 (rows)
- Inner loop 1 → prints spaces (n-i-1)
- Inner loop 2 → prints stars (2*i+1)

*Type 2 – 1-based loop*
- Outer loop → runs from 1 to n (rows)
- Inner loop 1 → prints spaces (j from i to n-1)
- Inner loop 2 → prints stars (2*i-1)

Both types produce the same pyramid visually.

## Complexity
- Time Complexity: O(n^2)
- Space Complexity: O(1)

## Example Output (n=5)
<img width="129" height="123" alt="Image" src="https://github.com/user-attachments/assets/b8839abb-2add-4fe9-9fda-11cf20247213" />
