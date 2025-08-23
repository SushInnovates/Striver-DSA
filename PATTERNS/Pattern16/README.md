# Pattern 16 : Repeated Alphabet Triangle

## Description
This pattern prints a triangle where each row contains the same alphabet repeated.
- The first row has A.
- The second row has B B.
- The third row has C C C.
- The i-th row prints the (A + i) alphabet exactly i+1 times.

## Logic Summary
1. For each row i (0 to n-1):
   - Set the character ch = 'A' + i.
   - Print ch exactly i+1 times.
2. Move to the next line after finishing each row.

## Complexity
- Time Complexity: O(n²)
- Space Complexity: O(1)

## Example Output (n = 5)
<img width="174" height="139" alt="Image" src="https://github.com/user-attachments/assets/e6e907af-873e-4bc2-a1b6-719267b71d9f" />
