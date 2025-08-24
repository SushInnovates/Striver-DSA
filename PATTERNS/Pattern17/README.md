# Pattern 17 - Alphabet Pyramid (Palindromic Style)

## Description
This pattern prints a pyramid of alphabets with palindromic symmetry in each row.
  - Starts with A in the top row.
  - Each row increases the sequence of characters, then mirrors them in reverse order.
  - Centered with spaces to form the pyramid shape.

## Logic Summary
1. Outer Loop (i) → Handles the rows.
2. Leading Spaces → n - 1 - i spaces to align the pyramid.
3. Characters →
    - For each row i, print 2*i + 1 characters.
    - Maintain a variable ch = 'A'.
    - Define a breakpoint = (2*i+1)/2.
    - Increment ch until the breakpoint, then decrement afterward to create the mirror effect.
4. Trailing Spaces (optional for symmetry).
5. Print newline after each row.

## Complexity
- Time Complexity: O(n²)
- Space Complexity: O(1)

## Example OutPut (n = 5)
