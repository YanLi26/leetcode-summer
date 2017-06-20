# 336. Palindrome Pairs
## Difficulty for me

Hard

## Complexity
time complexity = O(n*n)

space complexity = O(n)

runtime: beat 20.30%

## Summary
### Palindrome

又是回文的题目，leetcode好多回文的题目。题目本身算不上hard的题，easy都可以算，但是测试数据TLE提升了题目的复杂度。重点在于用一个set储存所有string的长度，分别从words[i]前后截取比它长度小的存在于set中的长度，取reverse，在map中查找是否存在回文。

### Tips

