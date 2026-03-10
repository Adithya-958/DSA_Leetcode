class Solution:

 def moveZeroes(self, nums: List[int]) -> None:
    i,j =0, len(nums)-1
    # for r in range(len(nums)):
    #     #r = 0
    #     if(nums[r]!= 0):
    #         nums[i],nums[r] = nums[r],nums[i]
    #         i += 1
    # return nums
    while i <= j:
        if nums[i] == 0:
            nums.remove(0)
            nums.insert(j, 0)
        i += 1
    return nums

        