# Problem 217: Contains Duplicate

```text
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true

 

Constraints:

1 <= nums.length <= 10^5
-109 <= nums[i] <= 10^9
```

## Difficulty
Easy

## Initial Thoughts

The brute force method of solving this problem seems like a process of elimination. 

You take an array and check each element, one at a time, against all other elements. This requries a nested loop which should give O(n^2) time.

For each index i:
    - Compare nums[i] with every value after it.
    - If two values match, immediately return true.

If every pair has been checked without a match:
    - return false

```text
[1, 2, 3, 1] = true

i = 0 to n-1
j = i+1 to n-1

if (nums[i] == nums[j]) {
    return true
}
return false
```

## Key Insight

While the brute force method does produce the intended result, it is not optimal and for large n, will time out. The kep to optimizing this solution is to use an unordered_set to check if all values seen before the current element. Checking membership in the set replaces searching the entire previous portion of the array. 

## What I Learned

I learned to use the unordered_set data structure to optimize a search/compare operation. I have not used this very often. I learned two specific controls for inserting and checking membership:

seen.insert<value>

## Time Complexity

## Space Complexity

## Would I Solve It Again?