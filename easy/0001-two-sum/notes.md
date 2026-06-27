# 0001 Two Sum

## Difficulty
- Easy

## Initial Thoughts

My first thought was to solve this using a nested loop. This is the brute force method and it works because it checks every possible pair of values.

However, I knew there was a more efficient solution using an unordered map. Since I am still developing confidence with hash maps, I chose to solve the brute force version first so I could understand the indexing before optimizing. 

## Key Insight

For the brute force method, the important idea is that i tracks the first number in the pair, while j checks every number after i.

Starting j at i + 1 is important because it prevents comparing an element with itself and avoids checking the same pair twice.

For the optimized method, the key insight is to ask:

- For the current number, what number do i need to have already seen?

The needed value is:

needed = target - nums[i];

An `unordered_map` lets me quickly check whether that needed number has already appeared.

## What I Learned

This problem reminded me the importance of understanding indexing. I often have trouble deciding where loops should start and stop, so tracing a small example by hand helped me see the correct loop structure.

I also learned how an `unordered_map` can be used to store (key, value) pairs. In this problem, the number from the input array becomes the key, and its index becomes the value:

number -> index

This felt counterintuitive at first, but it makes sense because I want to quickly look up whether a number exists, while still being able to return its index.

## Time Complexity

- Brute Force Method: O(n^2)
- Optimized Method `unordered_map`: O(n)

## Space Complexity

- Brute Force: O(1)
- Optimized with unordered_map: O(n)

The optimized solution uses extra space because the map may store up to every number in the input array.

## Would I Solve It Again?

Yes, this is a good problem to revisit because it is a beginner-friendly example of how to use an unodered_map to reduce repeated searching. It also reinforces loop bounds, indexing, and the difference between values and indices.