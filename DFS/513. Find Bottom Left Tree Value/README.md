# 513. Find Bottom Left Tree Value
## Difficulty for me

Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 29.61%

## Summary
### DFS

这道题的bfs很简单，dfs难点在于确定最左边的一个数字，本题参照 http://www.cnblogs.com/grandyang/p/6405128.html 。用先序遍历避免了最左边数字的判断。因为顺序为根左右，因此只要左边的深度大于或者等于右边的，res就不会被赋值。

### Tips

