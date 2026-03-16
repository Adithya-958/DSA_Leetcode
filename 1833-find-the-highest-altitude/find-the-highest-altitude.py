class Solution:
    def largestAltitude(self, a: List[int]) -> int:
        pre = [0]*(len(a)+1)
        x  = 0
        for i in range(len(a)):
            x += a[i]
            pre.append(x)
        return max(pre)