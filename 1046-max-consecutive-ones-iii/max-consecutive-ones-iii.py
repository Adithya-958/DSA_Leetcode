class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        # n = len(nums)
        # maxi = 0
        # for i in range(n):
        #     rem = k
        #     for j in range(i,n):
        #         if(nums[j] == 0):   rem -= 1
        #         if rem >= 0:    
        #             print(maxi)
        #             maxi = max(j-i+1, maxi)
        #         else: break
        # return maxi
        i = 0
        cnt = 0
        max_cnt = 0
        for j in range(len(nums)):
            if (nums[j] == 0):
                cnt += 1
            if(cnt > k):
                if(nums[i] == 0):
                    cnt -= 1
                i += 1
            max_cnt = max(max_cnt, j-i+1)    
        return (max_cnt)