# Pattern 13 : Floyd's Triangle

## Description
This pattern prints numbers in a triangular form, where the sequence continues across rows without resetting.
- The first row has 1 number.
- The second row has 2 numbers.
= The third row has 3 numbers, and so on.
- Numbers increase continuously row by row.

## Logic Summary
1. Initialize a variable num = 1.
2. For each row i (1 to n):
   - Print i numbers in that row.
   - After each print, increment num.
3. Continue until all rows are printed.

## Complexity
- Time Complexity: O(n²)
- Space Complexity: O(1)

## Example Output (n = 5)
<img width="199" height="136" alt="Image" src="https://github.com/user-attachments/assets/afcd2366-9f8d-416a-b6a0-e11e15ccdbe9" />
