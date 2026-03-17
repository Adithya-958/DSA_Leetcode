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
        s1 = set(nums1)
        s2 = set(nums2)
        res = [[],[]]
        for i in (s1):
            if i not in s2:
                res[0].append(i)
        for i in ((s2)):
            if i not in s1:
                res[1].append(i)
        return res
        # k = set()
        # p = set()
        # for i in range(len(nums1)):
        #     if nums1[i] not in nums2:
        #             k.add(nums1[i])
        # for i in range(len(nums2)):
        #     if nums2[i] not in nums1:
        #             p.add(nums2[i])
        # return [list(k),list(p)]  # m*n m+n
        # k = []
        # p = []
        # for i in range(len(nums1)):
        #     if nums1[i] not in nums2:
        #         if nums1[i] not in k:
        #             k.append(nums1[i])
        # for i in range(len(nums2)):
        #     if nums2[i] not in nums1:
        #         if nums2[i] not in p:
        #             p.append(nums2[i])
        # #return [k,p] # m*n*k m+n
        