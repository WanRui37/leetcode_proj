# 移动零

给定一个数组`nums`，编写一个函数将所有`0`移动到数组的末尾，同时保持非零元素的相对顺序。


## 方法一
- 双指针: 使用快慢指针（left和right）
- 具体实现: 
    - 初始化left=0, right=0
    - right指针遍历整个数组
    - 当nums[right]不为0时，交换nums[left]和nums[right]，然后left++
    - right指针每次循环都递增
- 时间复杂度：O(n)
- 空间复杂度：O(1)