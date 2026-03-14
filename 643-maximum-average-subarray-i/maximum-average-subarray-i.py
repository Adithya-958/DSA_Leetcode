class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        # maxi = 0
        # for i in range(0,len(nums)-k+1):
        #     sumi = 0
        #     for j in range(i, i+k):
        #         sumi += nums[j]
        #     if maxi < sumi:
        #         maxi = sumi
        # return maxi/k
        window = sum(nums[:k])
        res = window
        for i in range(k,len(nums)):
            window += nums[i]
            window -= nums[i-k]
            res = max(window, res)
        return res/k
                    