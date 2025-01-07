from typing import Counter


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) != len(t):
            return False;
        
        m = Counter(s)
        t = Counter(t)
        
        return m == t
        
# Run the solution
solution = Solution()
print(solution.isAnagram("nagaram", "anagram"))