# Pattern 22 – Concentric Number Square

## Description
This pattern prints a square of numbers in concentric layers from n down to 1 and then back up.

## Logic Summary
1. The pattern size is (2 * n - 1) × (2 * n - 1).
     - For n = 5, size = 9 × 9.
2. For each cell (i, j):
     - Find minimum distance to any border:
            top    = i
            left   = j
            right  = (2*n - 2) - j
            down   = (2*n - 2) - i
            minDist = min(top, down, left, right)
    - The value = n - minDist
 This formula ensures numbers decrease as we go inward.

## Complexity
- Time Complexity: O(n^2) → we fill (2n - 1) × (2n - 1) cells.
- Space Complexity: O(1) → only variables used.

## Example Output (n = 4)
<img width="188" height="180" alt="Image" src="https://github.com/user-attachments/assets/c1d08291-6a7c-4067-9132-a30f16b19e83" />
