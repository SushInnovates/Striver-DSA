# Pattern 14 : Alphabet Triangle

## Description
This pattern prints an alphabet triangle starting from A.
- The first row contains only A.
- The second row contains A B.
- The third row contains A B C, and so on.
- Each row extends the sequence of alphabets by one additional letter.

## Logic Summary
1. For each row i (0 to n-1):
   - Print characters from 'A' up to 'A' + i.
   - Add a space after each character for proper formatting.
2. Move to the next line after finishing each row.

## Complexity
- Time Complexity: O(n²)
- Space Complexity: O(1)

## Example Output (n = 5)
