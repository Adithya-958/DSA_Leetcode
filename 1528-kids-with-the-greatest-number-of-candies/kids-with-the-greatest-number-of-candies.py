class Solution:
    def kidsWithCandies(self, a: List[int], x: int) -> List[bool]:
        res = []
        maxi_c = max(a)
        cnt = 0
        for i in range (len(a)):
            if(a[i]+x >= maxi_c):
                res.append(True)
            else:
                res.append(False)
        return res