# 81. Search in Rotated Sorted Array II
## Difficulty for me

Medium

## Complexity
time complexity = O(logn)

space complexity = O(1)

runtime: beat 31.73%

## Summary
### binary search

题目本身就是简单的二分查找，难点在于判定条件较多，还有最后--right的条件。具体为，首先对mid的位置进行判定，一种在升序中，一种在降序中，然后对target相对于mid的大小进行判定。最后将所有结果相同的判定条件合并。

### Tips

