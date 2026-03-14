class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        max_cnt = 0
        n = len(s)
        V = "aeiou"
        cnt = 0
        for i in range(0,k):
            
            if s[i] in V:
                cnt += 1
            max_cnt = max(max_cnt, cnt)
        for i in range(k, n):
            if s[i] in V:
                cnt += 1
            if s[i-k] in V:
                cnt -= 1
            max_cnt = max(cnt, max_cnt)
        return max_cnt
        # for i in range(0, n-k):
        #     cnt = 0
        #     for j in range(i, i+k):
        #         if s[j] in V:
        #             cnt += 1
        #     if cnt > max_cnt:
        #         max_cnt = cnt