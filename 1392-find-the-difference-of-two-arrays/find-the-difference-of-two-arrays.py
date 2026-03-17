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
        # set1 = set(nums1)
        # set2 = set(nums2)
        # answer = [[],[]]
        # for i in set1:
        #     if i not in set2:
        #         answer[0].append(i)
        # for i in set2:
        #     if i not in set1:
        #         answer[1].append(i)
        # return answer 
 # m*n, m+n
 # m+n, m+n
        k = set()
        p = set()
        for i in range(len(nums1)):
            if nums1[i] not in nums2:
                    k.add(nums1[i])
        for i in range(len(nums2)):
            if nums2[i] not in nums1:
                    p.add(nums2[i])
        return [list(k),list(p)] #m*n
        k = []
        p = []
        for i in range(len(nums1)):
            if nums1[i] not in nums2:
                if nums1[i] not in k:
                    k.append(nums1[i])
        for i in range(len(nums2)):
            if nums2[i] not in nums1:
                if nums2[i] not in p:
                    p.append(nums2[i])
        #return [k,p] # m*n*k m+n
        