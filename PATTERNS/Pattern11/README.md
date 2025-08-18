# Pattern 11 : Binary Triangle

## Description
Prints a right-angled triangle where each row alternates 1 and 0.
- Even-Indexed rows (0,2,4,..) start with 1.
- Odd-indexed rows (1,3,5,...) start with 0.
  Each next digit in the row is simply the opposite of the previous one.
  
## Logic Summary
1. Use a variable start to decide the first digit of the row.
   - If row index i is even -> start = 1.
   - If row index i is odd -> start = 0.
2. For Each column j in roow i,print start and then flip it(start = 1 - start).
3. Repeat for all rows.

     
## Complexity 
- Time Complexity: O(n^2)
- Space Complexity: O(1)

 ## Example Output (n = 5)
 <img width="190" height="125" alt="Image" src="https://github.com/user-attachments/assets/58f0c321-f0aa-4c61-8b08-3dd1598f6a00" />
