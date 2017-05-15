# 547. Friend Circles
## Difficulty for me

Medium

## Complexity
the worst time complexity = O(n^3)

the best time complexity = O(n^2)

space complexity = O(n)

runtime: beat 5.94%

## Summary
### DFS

刚开始没有想到dfs方法，参考 http://www.cnblogs.com/grandyang/p/6686983.html 理解了。对图的dfs计算方法。其中用到一个dfs中经常用的visited数组。首先对每个人进行遍历，如果这个人没有加入任何圈子，则对这个人dfs，具体方法是找出每个和这个人有关系的人，然后再分别查找这个人的relation。当查找完一个圈子后圈子数加一再查找下一个圈子。

### Tips

