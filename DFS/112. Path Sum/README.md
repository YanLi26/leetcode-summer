# 112. Path Sum
## Difficulty for me

Easy

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 23.44%

## Summary
### DFS

难点在于判定条件，首先判定结点为空，因为有判定叶子结点的语句，因此结点为空绝对不是叶子结点，所以返回false。然后判定是否为叶子结点，和是否为0。最后遍历二叉树。

### Tips

