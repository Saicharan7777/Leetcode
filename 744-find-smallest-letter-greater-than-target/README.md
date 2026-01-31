# 744. Find Smallest Letter Greater Than Target

Problem link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/

## Summary
Given a sorted list of letters and a target character, return the smallest letter in the list that is strictly greater than the target. The letters wrap around (so if the target is greater than or equal to all letters, return the first letter).

## Approach (Binary Search)
Use binary search to find the first letter greater than the target. Track the best candidate as you search. If no greater letter is found, the answer remains the first letter due to wrap-around.

## Complexity
- Time: $O(\log n)$
- Space: $O(1)$
