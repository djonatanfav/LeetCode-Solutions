# Using Slide Window
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        right_pointer = 0
        left_pointer = 0
        dictionary = {}
        
        while right_pointer <= min(len(nums) -1, k):
            if nums[right_pointer] in dictionary:
                return True
            else:
                dictionary[nums[right_pointer]] = 1
            right_pointer += 1
        
        while right_pointer <= len(nums) - 1:
            del dictionary[nums[left_pointer]]
            if nums[right_pointer] in dictionary:
                return True
            else:
                dictionary[nums[right_pointer]] = 1
            right_pointer += 1
            left_pointer += 1
        return False
    
        
solution = Solution()
print(solution.containsNearbyDuplicate([1,2,3,1,2,3], 2))