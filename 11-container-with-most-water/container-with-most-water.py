class Solution:
    def maxArea(self, a: List[int]) -> int:
        i,j = 0, len(a)-1
        res = 0
        while(i <= j):
            res = max(res,(min(a[i],a[j])*(j-i)))
            if(a[i] < a[j]): i += 1
            else: j -= 1
        return res
