# Pattern 10: Half Diamond

## Description
- Type 1:
This pattern prints two right-angled triangles (one increasing and one decreasing) stacked vertically.
The first half increases from 1 star to n stars, and the second half decreases back from n stars to 1 star.

- Type 2:
This is an optimized version of the double right-angled triangle pattern.
Instead of using two separate loops (one for increasing and one for decreasing), it uses a single loop with a conditional check to decide whether to increase or decrease the number of stars.

## Logic Summary
Type 1:
- Print the increasing triangle using a loop from 1 to n.
- Print the decreasing triangle using a loop from n down to 1.
  
Type 2:
- Total rows required = 2n - 1.
- For each row i:
    If i ≤ n, print i stars (increasing part).
    If i > n, print 2n - i stars (decreasing part).

This avoids duplication of the middle row and keeps the code compact.
## Complexity
- Time Complexity: O(n^2)
- Space Complexity: O(1)

## Example Output (n = 4)
<img width="163" height="185" alt="Image" src="https://github.com/user-attachments/assets/c160d728-e962-4612-ac3a-9d2d4bdeacf0" />
