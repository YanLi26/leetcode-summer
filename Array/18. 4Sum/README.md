# 18. 4Sum
## Difficulty for me

Medium

## Complexity
time complexity = O(n^3)

space complexity = O(1)

runtime: beat 45.67%

## Summary
### sum

two sum, three sum, four sum。其实本质上都一样。本来用dfs，结果妥妥超时，leetcode的代码必须优化。后来借鉴别人写法，先确定两个数，再从左右向中间找另外两个数。不过几sum，都是加层循环而已。

### Tips

