## What does the question mean?

You are given two strings, `word1` and `word2`. You need to combine them by alternating characters, starting with the first letter of `word1`. If one string is longer than the other, stop alternating when the shorter string runs out and append the remaining characters of the longer string directly to the end.

---

## How does the code work?

The logic handles the problem in two sequential phases:

1. **Alternating Phase:** A loop runs up to the length of the shorter string. In each iteration, it appends the character at index `i` from `word1`, followed immediately by the character at index `i` from `word2`.
2. **Cleanup Phase:** Once the loop terminates, a conditional check or string slice identifies which string has remaining characters and appends that leftover chunk to the final result.

### Complexity

* **Time Complexity:** $O(n + m)$ where $n$ and $m$ are the lengths of the two strings. Every character is visited exactly once.
* **Space Complexity:** $O(n + m)$ to allocate the memory for the new merged string.
