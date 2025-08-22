# Pattern 15 : Inverted Alphabet Triangle

## Description
This pattern prints an inverted triangle of alphabets starting from A.
- The first row contains alphabets from A up to A + (n-1).
- Each subsequent row reduces the count of alphabets by one.
- The last row contains only A.

## Logic Summary 
1. For each row i (0 to n-1):
    - Print characters from 'A' up to 'A' + (n-1-i).
    - Add a space after each character for readability.
2. Move to the next line after finishing each row.

## Complexity
- Time Complexity: O(n²)
- Space Complexity: O(1)

## Example Output (n = 5 )
<img width="185" height="138" alt="Image" src="https://github.com/user-attachments/assets/a18a52fb-18d9-4fdc-a3be-84a3cdad4afa" />
