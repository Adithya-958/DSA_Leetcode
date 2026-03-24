class Solution:
    def predictPartyVictory(self, s: str) -> str:
        r = []
        d = []
        n = len(s)
        for i in range(n):
            if s[i] == 'R':
                r.append(i)
            else:
                d.append(i)
        while(r and d):
            r_idx = r[0]
            r.remove(r[0])
            d_idx = d[0]
            d.remove(d[0])
            if r_idx < d_idx:
                r.append(r_idx+n)
            else:
                d.append(d_idx+n)
        if r:
            return "Radiant"
        return "Dire"