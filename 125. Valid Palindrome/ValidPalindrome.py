import re

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        i = 0
        j = len(s) - 1

        if j <= 0:
            return True

        while j >= 0:
            if s[i] != s[j]:
                return False
            i += 1
            j -= 1

        return True

Solution = Solution()
print(Solution.isPalindrome("A man, a plan, a canal: Panama"))