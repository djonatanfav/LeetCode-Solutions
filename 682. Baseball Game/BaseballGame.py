from typing import List


class Solution:
    def calPoints(self, operations: List[str]) -> int:
        record = []
        
        for currentOperation in operations:
            match currentOperation:
                case "+":
                    record.append(record[-1] + record[-2])
                case "D":
                    record.append(record[-1] * 2)
                case "C":
                    record.pop()
                case _:
                    if currentOperation.isdigit() or (currentOperation[0] == '-' and currentOperation[1:].isdigit()):
                        record.append(int(currentOperation))
        
        return sum(record)
    
solution = Solution()
print(solution.calPoints(["5","-2","4","C","D","9","+","+"]))