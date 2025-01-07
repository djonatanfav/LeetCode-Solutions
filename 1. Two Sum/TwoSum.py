from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        h = {}
        
        for i in range(len(nums)):
            h[nums[i]] = i
        
        for i in range(len(nums)):
            r = target - nums[i]
            
            if r in h and h[r] != i:
                return [i, h[r]]
        
solution = Solution()
print(solution.twoSum([2,7,11,15], 9))