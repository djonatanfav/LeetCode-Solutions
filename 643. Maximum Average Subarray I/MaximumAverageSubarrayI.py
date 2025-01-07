from typing import List

class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        currentSum = 0

        for x in range(k):
            currentSum += nums[x]
        maxSum = currentSum

        for x in range(k, len(nums)):
            currentSum += nums[x] - nums[x-k] 
            maxSum = max(currentSum, maxSum)

        return maxSum / k

solution = Solution()
print(solution.findMaxAverage([1,12,-5,-6,50,3], 4))