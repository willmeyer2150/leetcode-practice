# 88. Merge Sorted Array

## Initial Thoughts
Tried to merge from the front and compare elements directly.

## Key Insight
Fill nums1 from the back using the unused space.

## Important Lessons

### Counts vs Indices
m and n are counts.

Last valid indices:
- i = m - 1
- j = n - 1

Use a third index tracker for the end of nums1

- k = m + n - 1

### Short-Circuit Evaluation

Safe:

if (i >= 0 && nums1[i] > nums2[j])

- A && B means: If A is false, evaluate B

Also safe:

if (i < 0 || nums1[i] < nums2[j])

- A || B means: If A is true, evaluate B

Because C++ short-circuits.

### Complexity
Time: O(m + n)
Space: O(1)