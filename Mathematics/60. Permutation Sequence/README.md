# 60. Permutation Sequence
## Difficulty for me

Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 21.03%

## Summary
### math

先开始想k除以n-1为第一位，k除以n-2为第二位。后来访问溢出，才发现应该是k除以所有除第一位以外的排列为第一位，余下的数除以除1、2位以外的排列为第二位。这里有小难点，k需要先减1，可以理解为第一个数字为第0位。

### Tips

