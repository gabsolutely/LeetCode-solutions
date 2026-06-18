## What does the question mean?

You are given an array `flowerbed` containing `0`s (empty plots) and `1`s (planted plots), along with an integer `n`. The objective is to determine if `n` new flowers can be planted in the empty plots without violating the rule that no two flowers can be adjacent. Return `true` if all `n` flowers can be placed legally, and `false` otherwise.

---

## How does the code work?

The approach solves the problem greedily by checking each plot sequentially in a single pass:

1. **Iterate and Evaluate:** A loop steps through every plot in the array. A flower can only be planted if the current plot is empty (`0`) and its immediate left and right neighbors are also empty (`0`).
2. **Handle Array Boundaries:** To prevent out-of-bounds errors at the edges of the array, the boundaries are conceptually treated as valid empty plots. The left check is satisfied if the loop is at index `0` or if the left neighbor is `0`. The right check is satisfied if the loop is at the last index or if the right neighbor is `0`.
3. **Greedy Placement:** When an empty plot meets both boundary/neighbor conditions, a flower is planted by setting the current element to `1`. This update prevents the next plot from accidentally placing a flower adjacent to it. The requirement count `n` is then decremented.
4. **Early Termination:** If `n` reaches `0` or less at any point during the iteration, the algorithm can immediately return `true` because all required flowers have been placed.

### Complexity

* **Time Complexity:** O(m), where m is the length of the flowerbed array. The array is traversed a single time.
* **Space Complexity:** O(1) auxiliary space, as the operations modify the input array in-place without allocating extra data structures.
