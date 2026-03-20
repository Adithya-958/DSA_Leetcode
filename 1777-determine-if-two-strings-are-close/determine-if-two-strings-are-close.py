class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if(len(word1) != len(word2)):
            return False
        s1 = set(word1)
        m = len(word1)
        s2 = set(word2)
        freq1 = [0]*26
        freq2 = [0]*26
        a1 = list(word1)
        a2 = list(word2)
        for i in range(m):
            freq1[ord(a1[i]) - ord('a')] += 1
            freq2[ord(a2[i]) - ord('a')] += 1
        freq1.sort()
        freq2.sort()
        print(freq1,freq2)
        if (s1 == s2 and freq1 == freq2):
            return True
        return False