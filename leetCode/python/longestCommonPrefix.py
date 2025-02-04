from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        for i in range(len(strs[0])):
            for s in strs:
                if i == len(s) or s[i] != strs[0][i]:
                    return res
            res += strs[0][i]
        return (res)

if __name__== "__main__":
    solution = Solution()
    test1 = ["flower", "flow", "flight"]
    test2 = ["dog", "racecar", "car"]
    test3 = [""]
    print(f"Test 1: {test1} -> {solution.longestCommonPrefix(test1)}")
    print(f"Test 2: {test2} -> {solution.longestCommonPrefix(test2)}")
    print(f"Test 3: {test3} -> {solution.longestCommonPrefix(test3)}")