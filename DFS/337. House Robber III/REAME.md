# 337. House Robber III

ref: http://www.cnblogs.com/grandyang/p/5275096.html

## Difficulty for me

Hard

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 49.21%

## Summary
### DFS

dfs的题目最忌讳想太多。首先判定跳出条件即结点不存在，将数组中两个数都赋值为0。返回的数组第一个数字代表不包含当前结点的最大值，第二个数字代表包含当前结点的最大值。先分别递归左，右结点，找出包含做左／右结点的最大值和不包含左／右结点的最大值。然后找出不包含当前结点的最大值和包含当前结点的最大值。

### Tips

