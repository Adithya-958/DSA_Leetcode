class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split()
        print(s)
        res = []
        for i in range(len(s)-1,-1,-1):
            res.append(s[i])
            
        return " ".join(res)