## What does the question mean?
Given an array of numbers, move all the zeros to the right side of the array while preserving the original relative order of all non-zero numbers. This modification must be performed "in-place," meaning no additional arrays or copies can be created to hold the values.


## How does the code work?
The algorithm implements a two-pointer technique consisting of a slow pointer and a fast pointer to separate zero elements from non-zero elements.
 * *Pointer Roles:* A slow pointer tracks the index where the next non-zero element should be placed, while a fast pointer scans forward through each index of the array sequentially.
 * *Scanning Phase:* The fast pointer ignores any value that is equal to zero and continues moving forward.
 * *Swapping Phase:* The moment the fast pointer encounters a non-zero element, that element is swapped with the element at the slow pointer's position.
 * *Pointer Update:* After the swap, the slow pointer increments by one index to prepare for the next non-zero element. This keeps the slow pointer anchored at the earliest zero in the array once one is found.
 
### Complexity
 * *Time Complexity:* O(n) where n is the total number of elements in the array. The array is traversed exactly once.
 * *Space Complexity:* O(1) auxiliary space because the operation modifies the array directly without allocating extra data structures.
