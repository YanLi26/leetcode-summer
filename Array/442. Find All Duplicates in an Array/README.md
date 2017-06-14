# 442. Find All Duplicates in an Array
## Difficulty for me

Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 48.12%

## Summary
### Array

这道题的关键在于数字范围是数组size之内，因此只需要找到不在自己位置上的数字，即为duplicates。

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 69.55%

## Summary
### Array

解法二，将每个数应当在的位置的数字取反，如果发现这个数字是负数，说明前面有duplicate，将这个数字压入vector

