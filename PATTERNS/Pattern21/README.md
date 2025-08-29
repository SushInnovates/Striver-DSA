# Pattern 21 - Hollow Square

## description
Prints a square of size n × n where only the border is made of stars, and the inside is filled with spaces.

## Logic Summary 
1. Total Rows: n
2. Total Columns: n
3. Condition for Star (*):
  - Print * if on border → (i == 0 || j == 0 || i == n - 1 || j == n - 1)
  - Else print space " "

### Formula:
- Border cells: Star
- Inner cells: Space\

## Complexity
- Time Complexity: O(n^2) → for traversing all cells.
- Space Complexity: O(1) → constant extra space.

## Example Output (n = 5)
