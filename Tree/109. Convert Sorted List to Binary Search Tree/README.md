# 109. Convert Sorted List to Binary Search Tree
## Difficulty for me

Medium

## Complexity
time complexity = O(n*n/2)

space complexity = O(1)

runtime: beat 55.08%

## Summary
### tree

将链表变为二叉搜索树，仍用二分查找，但是链表不能用index查找，因此用快慢结点查找中间点。每次查找到以后将slow前的值的next置为null，分为另外两个链表递归。

### Tips

