class Solution:
    def closeStrings(self, s1: str, s2: str) -> bool:
        m = len(s1)
        n = len(s2)
        str1 = list(s1)
        str2 = list(s2)
        if(m != n):
            return False
        l1 = set()
        l2 = set()
        freq1 = [0]*26
        freq2 = [0]*26
        for i in range(m):
            l1.add(str1[i])
            l2.add(str2[i])
            freq1[ord(str1[i]) - ord('a')] += 1
            freq2[ord(str2[i]) - ord('a')] += 1
        freq1.sort()
        freq2.sort()
        if(l1 == l2 and freq1 == freq2):
            return True
        else:
            return False