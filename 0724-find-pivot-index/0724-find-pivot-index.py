class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        if len(nums) == 0:
            return -1

        left = 0
        right = len(nums) - 1
        sum1 = 0
        sum2 = sum(nums)

        while left <= right:
            sum2 -= nums[left]

            if sum1 == sum2:
                return left

            sum1 += nums[left]
            left += 1

        return -1