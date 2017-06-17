# 525. Contiguous Array
## Difficulty for me

Medium

## Complexity
time complexity = O(nlogn)

space complexity = O(n)

runtime: beat 30.85%

## Summary
### sum

array中求sum的问题，解法很巧妙。刚开始理解题目以为要求最长的0101不断重复的个数，后面发现是在求0的个数和1的个数相等的子串，想出来的方法时空复杂度太高，于是参考了别人的解法。解法非常巧妙，首先用一个map记录前n个数字的和（遇1加1，遇0减1），和其对应的坐标，然后用sum记录前n个数字的和。如果sum的值出现在map中，说明从出现位置到当前位置的子串和为0。

### Tips

