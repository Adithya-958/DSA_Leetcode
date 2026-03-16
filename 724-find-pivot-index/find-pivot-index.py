class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        # for i in range(len(nums)): # 1 7 3 6 5 6
        #     pre,suff = 0, 0
        #     for j in range(i):
        #         pre += nums[j] # 1 8 
        #     for j in range(i+1,len(nums)):
        #         suff += nums[j] # 6 11
        #     print(pre)
        #     if(pre == suff):
        #         return i
        # return -1
        left, total = 0,0
        for i in range(len(nums)):
            total += nums[i]
        for i in range(len(nums)):
            if(left == (total - left- nums[i])):
                return i
            left += nums[i]
        return -1