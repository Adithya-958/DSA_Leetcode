class Solution:
    def isin(self, nums1: List[int], nums2: List[int]) -> List[int]:
        b1 = []
        for i in range(len(nums1)):
            flag = False
            for j in range(len(nums2)):
                if (nums1[i] == nums2[j]):
                    flag = True
                    break
            if(not flag and nums1[i] not in b1):
                b1.append(nums1[i])
        return b1
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        # res1 = self.isin(nums1, nums2)
        # res2 = self.isin(nums2,nums1)
        # return [res1,res2]
        res,temp = [],[]
        for i in range(len(nums1)):
            if nums1[i] not in nums2 and nums1[i] not in temp:
                temp.append(nums1[i])
        res.append(temp)
        temp = []
        for i in range(len(nums2)):
            if nums2[i] not in nums1 and nums2[i] not in temp:
                temp.append(nums2[i])
        res.append(temp)
        return res

        