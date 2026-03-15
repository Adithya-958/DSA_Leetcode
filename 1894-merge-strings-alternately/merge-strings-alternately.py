class Solution:
    def mergeAlternately(self, a: str, b: str) -> str:
        res = []
        m,n = len(a),len(b)
        for i in range(max(m,n)):
            if(i < len(a)): res.append(a[i])
            if(i < len(b)): res.append(b[i])
        return "".join(res)