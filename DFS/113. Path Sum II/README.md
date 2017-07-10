# 113. Path Sum II
## Difficulty for me

Medium

## Complexity
time complexity = O(n)

space complexity = O(n)

runtime: beat 54.05%

## Summary
### DFS

用一个array记录中间值，难点在于push的点在于叶子结点并且和为sum。如果直接push，会造成不是叶子结点或者push两次的情况。

### Tips

