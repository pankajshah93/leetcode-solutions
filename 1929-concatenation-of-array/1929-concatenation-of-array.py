class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        arr = nums.copy()
        for i in nums:
            arr.append(i)
        return arr    
