class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        ans = [[],[]]
        a1 = set(nums1)
        a2 = set(nums2)
        for i in a1:
            if (i not in a2):
                ans[0].append(i)
        for i in (a2):
            if(i not in a1):
                ans[1].append(i)
        return ans