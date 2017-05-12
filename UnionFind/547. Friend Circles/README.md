# 547. Friend Circles
## Difficulty for me

Medium

## Complexity
the worst time complexity = O(n^3/2)

the best time complexity = O(n^2/2)

space complexity = O(n)

runtime: beat 69.81%

## Summary
### Union Find

很暴力的解法，用一个vector存储所有人，赋为0。如果第i个人和第j个人是朋友，那么更新他们的relation。如果这两个人本来有圈子，则将两个圈子联通。最后返回没有relation的人和圈子的个数和。

### Tips

