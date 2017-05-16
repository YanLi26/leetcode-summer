# 529. Minesweeper_iteration
## Difficulty for me

Medium

## Complexity
Best time complexity = O(1)

Worst time complexity = O(n)

space complexity = O(1)

runtime: beat 63.19%

## Summary
### BFS iteration

迭代实现的bfs，用一个queue存储所有需要bfs的点，一个个取出。注意判定条件，如果一个点周边都不是雷，周边的点都赋值为'B'，可以减少运算次数，否则会TLE。

### Tips


# 529. Minesweeper_recursion
## Difficulty for me

Medium

## Complexity
Best time complexity = O(1)

Worst time complexity = O(n)

space complexity = O(1)

runtime: beat 9.03%

## Summary
### BFS recursion

递归实现的bfs，和非迭代思想一样，区别在于不借助queue，以前放入queue中的点现在每次跑一遍原函数来实现。

### Tips

