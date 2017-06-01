# 199. Binary Tree Right Side View
## Difficulty for me

Easy

## Complexity
time complexity = O(n)

space complexity = O(n/2)

runtime: beat 24.45%

## Summary
### BFS

这道题就是最简单的层次遍历，重点在于判断什么时候为一层。本来想用dfs直接找到最右枝，结果发现理解错了，这道题是找到每一层最右边的值，是不是相连的结点没关系。

### Tips

