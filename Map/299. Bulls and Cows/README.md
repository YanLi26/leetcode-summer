# 299. Bulls and Cows
## Difficulty for me

Easy

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 28.67%

## Summary
### map

用一层循环做，如果位置和数字都相同，++bulls。如果secrect[i]个数 < 0说明前面在guess中出现过，++cows。如果guess[i]个数 > 0说明前面在secrect中出现过，++cows。

### Tips

