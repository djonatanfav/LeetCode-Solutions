class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        r = 0
        l = 0
        h = {}
        c = 0
        m = 0
        
        while r <= len(s) - 1:    
            if (s[r]) not in h:
                h[s[r]] = 0
            h[s[r]] += 1
            
            if max(h.values()) < 3:
                r += 1
                c += 1
            else:
                h[s[l]] -= 1
                r += 1
                l += 1
                
            m = max(m, c)
            
        return m
            
            
solution = Solution()
print(solution.maximumLengthSubstring("bcbbbcba"))