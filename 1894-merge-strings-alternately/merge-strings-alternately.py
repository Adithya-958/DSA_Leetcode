class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        s3 = [] # list with size m+n 
        for i,j in zip(word1,word2): #combine 2 str into 1
            s3.append(i+j)
        # add the remaining elements to the s3.
        s3.append(word1[len(word2):])# word1 is big size  
        s3.append(word2[len(word1):])
        
        return "".join(s3)