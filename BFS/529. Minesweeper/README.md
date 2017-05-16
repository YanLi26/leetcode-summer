# 529. Minesweeper
## Difficulty for me

Medium

## Complexity
Best time complexity = O(1)

Worst time complexity = O(n)

space complexity = O(1)

runtime: beat 63.19%

## Summary
### BFS iteration

迭代方式的bfs，用一个queue存储所有需要bfs的点，一个个取出。注意判定条件，如果一个点周边都不是雷，周边的点都赋值为'B'，可以减少运算次数，否则会TLE。

### Tips

