class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        # Base Case 1: If they aren't even starting with the same pattern, 
        # there's no common divisor.
        # if str1 + str2 != str2 + str1:
        #     return ""
        
        # # Base Case 2: If the strings are identical, that's our GCD!
        # if str1 == str2:
        #     return str1
        
        # # Recursive Step: "Subtract" the shorter string from the longer one.
        # # If str1 is longer, remove the matching part and keep going.
        # if len(str1) > len(str2):
        #     return self.gcdOfStrings(str1[len(str2):], str2)
        
        # # If str2 is longer, remove the matching part and keep going.
        # return self.gcdOfStrings(str1, str2[len(str1):])

        a,b = len(str1),len(str2)
        if(str1+str2 == str2+str1):
            ans = gcd(len(str1), len(str2))
            return str2[:ans]
        else: return ""