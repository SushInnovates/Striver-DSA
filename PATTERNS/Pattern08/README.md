# Pattern 8: Inverted Pyramid

## Description
This pattern prints an inverted pyramid of stars. The first row contains the maximum number of stars, and each subsequent row decreases by 2 stars, forming a pyramid flipped upside down.

## Logic Summary
- Use an outer loop for rows.
-  Print leading spaces (i spaces for row i).  
- Print decreasing number of stars (2*(n-i)-1 stars).  

##  Complexity
- Time Complexity : O(n^2)
- Space Complexity : O(1)

## Example Output (n = 5)
<img width="167" height="121" alt="Image" src="https://github.com/user-attachments/assets/f01d7b97-c00e-4b55-ae7f-0141c51f4967" />
