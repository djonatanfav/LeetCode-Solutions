class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        factorOrder = 0
        for i in range(n+1):
            if i == 0:
                continue

            if n % i == 0:
                factorOrder += 1
                if factorOrder == k:
                    return i
        
        return -1

solution = Solution()
print(solution.kthFactor(7,2))