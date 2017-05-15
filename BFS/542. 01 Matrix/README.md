# 542. 01 Matrix
## Difficulty for me

Hard

## Complexity
time complexity = O(m*n)

space complexity = O(1)

runtime: beat 88.89%

## Summary
### BFS pair

一个一个点bfs会time limited exceed，在网上找了这种方法 https://discuss.leetcode.com/topic/83453/java-solution-bfs ，将每一个零点当作bfs的起始点然后遍历其四周的四个点。首先将matrix为0的点加入queue中，为1的点写为INT_MAX。遍历queue，如果周围点比这个点大，则将周围点赋为这个点加一然后将周围点push进queue中。原理是从外层开始，逐层更新每个点距离最近0点的距离。

### Tips

1.pair<int,int> zero
    zero.push{i, j}
    zero.first;
    zero.second;