class Solution:
    def reverseWords(self, s: str) -> str:
        # s1 = s.split()
        # i,j = 0, len(s1)-1
        # while(i<j):
        #     s1[i], s1[j] = s1[j], s1[i]
        #     j -= 1
        #     i += 1
        # return " ".join(s1) 
        print(s)       
        # s.split()
        words = []
        word = ""
        for i in s:
            if i == " ":
                if word:
                    words.append(word)
                    word = ""
            else:
                word += i 
        if word:
            words.append(word)
        print(words)
        i,j = 0, len(words)-1
        for i in range(len(words)//2):
            words[i], words[j] = words[j], words[i]
            j -= 1
        print(words)
        # " ".join(words)
        res = ""
        for i in range(len(words)):
            res += words[i]
            if i < len(words)-1:
                res += " "
        return res