class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        # maxi = 0
        # for i in range(len(nums)):
        #     breaki = 0
        #     for  j in range(i, len(nums)):
        #         if(nums[j] == 0):
        #             breaki += 1
        #         if(breaki > 1):
        #             break
        #         maxi = max(maxi,j-i)
        # return maxi
        i = 0
        cnt = 0
        maxi = 0
        for j in range(len(nums)):
            if nums[j] == 0:
                cnt += 1
            if (cnt > 1):
                if(nums[i] == 0):   cnt -= 1
                i += 1
            maxi = max(j-i,maxi)
        return maxi