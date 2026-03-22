class Solution:
    def removeStars(self, s: str) -> str:
        l1, l2 = [], []
        for i in range(len(s)):
            if(s[i] != '*'):
                l1.append(str(s[i]))
            else:
                l2.append(str(s[i]))
                l1.pop()
        return "".join(l1)