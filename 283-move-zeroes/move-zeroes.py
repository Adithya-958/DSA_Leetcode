class Solution:

 def moveZeroes(self, nums: List[int]) -> None:
    n = len(nums)
    i = 0
    for r in range(len(nums)):
        #r = 0
        if(nums[r]!= 0):
            nums[i],nums[r] = nums[r],nums[i]
            i += 1
    return nums


        