from typing import List


class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        right_pointer = 0
        left_pointer = 0
        dictionary = {}
        
        while right_pointer <= min(len(nums), k):
            if nums[right_pointer] not in dictionary:
                dictionary[nums[right_pointer]] = 0
            dictionary[nums[right_pointer]] += 1
            right_pointer += 1
           
        if self.checkCurrent(dictionary):
            return True
        
        while right_pointer <= len(nums) - 1:
            if nums[right_pointer] not in dictionary:
                dictionary[nums[right_pointer]] = 0
            dictionary[nums[right_pointer]] += 1
            dictionary[nums[left_pointer]] -= 1
            if self.checkCurrent(dictionary):
                return True
            right_pointer += 1
            left_pointer += 1
        
        return False
    
    def checkCurrent(self, dictionary):
        for v in dictionary.values():
            if v > 1:
                return True
            
            
        
solution = Solution()
print(solution.containsNearbyDuplicate([1,2,3,1,2,3], 2))