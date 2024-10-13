class Solution:
    def minImpossibleOR(self, nums: List[int]) -> int:
        for i in range(35):
            if (pow(2,i)) not in nums:
                return pow(2,i)