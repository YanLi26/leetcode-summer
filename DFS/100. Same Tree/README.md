# 100. Same Tree
## Difficulty for me

Easy

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 1.95%

## Summary
### DFS

用dfs解这道题重点仍在于判定条件，首先如果两个node都为null，为真，其次如果其中一个为null另一个存在，则两树不相同，最后如果两个node都存在，判定它们的值是否一样，如果一样就继续遍历。

### Tips

