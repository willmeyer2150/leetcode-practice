# 35. - Search Insert Position

## Difficulty
-   Easy

## Initial Thoughts

Since the array is sorted, binary search is the first algorithm that comes to mind, rather than some sort of linear scan. The challenging part is that this problem also asks for the index where target should be inserted if it isn't found. That means we need to track the correct insertion position throughout the search.

## Key Insight

Rather than searching for an exact match and returning -1 when target is missing, we can use a lower bound binary search. 

The key is to maintain the search range of [l, r] so that:

- Every element before l is always less than target.
- Every element at or after r is a possible insertion position.

The midpoint is calculated as:

`middle = l + (r - l) / 2`

which avoids potential integer overflow.

At each iteration:

- If nums[mid] < target, the insertion point must be to the right of mid, so set l = mid + 1.
- Otherwise, the insertion point could be mid or somewehre to the left, so set r = mid.

When the loop terminates (l == r), l is the first index where the target could be inserted while keeping the array sorted. If the target exists, this will also be its index.

## What I Learned

This problem helped me understand a second form of binary search beyond the "find or return -1" version taught in most textbooks.

The biggest takeaway was learning how the search interval changes using a half-open range [l, r] and why the algorithm returns l instead of -1. Tracing a small example by hand made it much easier to see how l converges on the correct insertion position, regardless of whether the target is found.

I also learned to compute the midpoint using:

`mid = l + (r - l) / 2`

instead of

`mid = (l + r) / 2`

to avoid overflow in larger arrays.

## Time Complexity

`O(log n)`

Each iteration eliminates half of the remaining search space.

## Space Complexity

`O(1)`

Only a constant amount of extra memory is used.

## Would I Solve It Again?

Yes. This problem added an interesting twist to the traditional binary search pattern found in most texts. I can see this being a part of a technical interview. We'll call it the lower bound search at this point. It's a great one to revisit since I bet it will come up in more difficult problems. It covers insertion points, first/last occurences (when duplicates are found) and searching over monotonic conditions (Problems where once it becomes True, it never returns to false again).

Example:

```
Speed = 1   -> Too slow
Speed = 2   -> Too slow
Speed = 3   -> Too slow
Speed = 4   -> Works
Speed = 5   -> Works
Speed = 6   -> Works
```


