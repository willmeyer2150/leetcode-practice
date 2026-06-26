# 28. Find the Index of the First Occurrence in a String

## Difficulty
Easy

## Initial Thoughts

My first thought was to approach this similarly to Horspool's string-searching algorithm. I considered aligning the end of needle with the corresponding position in haystack, comparing characters from right to left, and then advancing the patternwhen a mismatch occurred.

The problem with simply advancing by the length of the pattern is that valid matches can be skipped. This is one of the reasons Horspool's algorithm uses a shift table to determine how fart the pattern can safely move after a mismatch.

For this problem, that approach is not required. A simple brute-force search is both easier to understand and appropriate for the problem constraints.

## Key Insight

The key realization was that there are two different indices being tracked:

- i represents a possible starting position in haystack.
- j represents the current character being checked in needle.

For every possible starting position i, we compare each character of needle against the corresponding character in haystack.

haystack[i + j] == needle[j]

The expression i + j allows us to keep the starting position fixed while advancing through both strings during the comparison.

If every character matches, we return i, which is the index of the first occurrence.

## What I Learned

I struggled initially because it felt like the indices of the two strings should move together. The breakthrough was understanding that the outer loop and inner loop have different responsibilities:

- The outer loop chooses where the match might begin.
- The inner loop verifies whether a match actually exists at that position.

Thinking of i as a starting position and j as an offset made the indexing much easier to understand.

## Time Complexity

The outer loop may examine every valid starting position in haystack, and the inner loop may compare every character in needle.

Time Complexity: O(n x m)

Where:

- n = length of haystack
- m = length of needle

## Space Complexity

The algorithm uses only a few variables regardless of input size.

Space Complexity: O(1)

## Would I Solve It Again?

Yes. This problem exposes a weakness in my understanding of nested-loop indexing. I tend to struggle when two indices work together to reference different positions within the same structure.

Repeating problems like this will help me become more comfortable with the idea of a starting position plus an offset, which appears frequently in string algorithms, sliding window problems, and two-pointer techniques.