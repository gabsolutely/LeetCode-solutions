## What does the question mean?
Given a string s, the goal is to reverse only the vowels ('a', 'e', 'i', 'o', 'u', both lowercase and uppercase) while keeping all consonants in their original positions.

## How does the code work?
The logic uses a two-pointer approach to modify the string in a single pass:
 1. *Initialization:* Two pointers are set up, one at the start (left) and one at the end (right) of the string.
 2. *Scanning:* A loop runs as long as left is less than right.
   * The left pointer moves forward until it encounters a vowel.
   * The right pointer moves backward until it encounters a vowel.
 3. *Swapping:* Once both pointers land on a vowel, the characters at those positions are swapped. After the swap, both pointers move inward to continue the search.
 4. *Termination:* The process stops when the two pointers meet or cross.
 
### Complexity
 * *Time Complexity:* O(n), where n is the length of the string. Each character is visited a constant number of times.
 * *Space Complexity:* O(n) to convert the string into a mutable character array to perform the swaps.
