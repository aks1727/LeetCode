class Solution:
    def scoreOfString(self, s: str) -> int:
        sum = 0
        for _ in range(1,len(s)):
            sum+= abs(ord(s[_]) - ord(s[_-1]))
        return sum
        