# 257. Binary Tree Paths
## Difficulty for me

Easy

## Complexity
time complexity = O(nlogn)

space complexity = O(nlogn)

runtime: beat 87.28%

## Summary
### DFS

用一个string存储中间数据，然后不断递归输入，如果到了叶子结点，就把中间值push_back到结果里。

### Tips
1. to_string
