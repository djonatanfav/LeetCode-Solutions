from typing import List

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        result = map(lambda x: x * x, nums)
        return sorted(result)

Solution = Solution()
print(Solution.sortedSquares([-4,-1,0,3,10]))
