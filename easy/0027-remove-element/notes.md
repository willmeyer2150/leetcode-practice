# 27. Remove Element

## Difficulty
- Easy

# Intuition
My initial thought was to swap invalid elements to the back of the array and then just count the first k good values. After further experimentation, the better solution is to copy good value elements to the front of the array and increment a count for each one found. Once you have traversed beyond those elements, they no longer matter. At the end of the array, just return the count.

# Approach
I always try to start with asking questions.
- What are my inputs?
- What am I returning?
- Does the order matter?
- What are my edge cases, like no elements removed or if every element is removed?

I then draw out small example problems and start iterating through solution possibilities on paper.

Trial and error is of course needed. I often have indexing problems. 

## Key Insight

Since the problem only requires the first k positions of the array to contain valid elements, values beyond position k-1 can be safely overwritten or ignored.

## What I Learned

I learned that in a two pointer solution, one pointer (i) is the reader and the other (k) is the writer. I am learning that it is important to recognize one from the other and not mix them up. You read from one and write into the other. 

i = reader
k = writer
for (reader = 0; reader < n; ++reader) {
    if (keep(nums[reader])) {
        nums[writer] = nums[reader];
        ++writer;
    }
}

## Mistakes Made

- Reversed the assignment direction:
    nums[i] = nums[k]
  instead of
    nums[k] = nums[i]

- Initially focused on moving bad values instead of preserving good values.

- Needed to distinguish between:
    i = reader
    k = writer

## Pattern

Two Pointers (Reader / Writer)

- Reader scans every element.
- Writer tracks the next valid insertion position.
- When a valid element is found, copy it to the writer position.
- Advance the writer.

# Complexity
- Time complexity:
    - Θ(n)
    - The array is traversed only once.

- Space complexity:
    - O(1)
    - Only a constant amount of extra memory is used.

## Would I Solve It Again?
- Yes, for review. My goal is to move beyond these easy problems and into real problem solving, but I recognize that I need to build these fundamental pattern skills.