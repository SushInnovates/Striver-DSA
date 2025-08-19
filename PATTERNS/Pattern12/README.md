# Pattern 12 : Number Pyramid with spaces

## Description
This pattern prints numbers in a mirrored fashion with spaces in between
- The left side prints numbers in increasing order from 1 to i.
- The right side prints numbers in decreasing order from i back to 1.
- The spaces in between start wide and reduce by 2 with each row, until they disappear in the last row.

## Logic Summary
  1. Initialize space = 2 * (n - 1).
  2. For each row i (1 to n).
      - Print numbers from 1 to i.
      - Print space spaces.
      - Print numbers from i down to 1.
      - Reduce space by 2 for the next row.
    
## Complexity
  - Time Complexity : O(n²)
  - Space Complexity: O(1)

## Example Output (n = 5)

    
