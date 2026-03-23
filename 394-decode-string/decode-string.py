class Solution:
    def decodeString(self, s: str) -> str:
        str_stack, num_stack = [], []
        sub = ''
        num = 0
        for i,v in enumerate(s):
            if v.isnumeric():
                num  = num * 10 + int(v)
            elif v == '[':
                num_stack.append(num)
                num = 0
                str_stack.append(sub)
                sub = ''
            elif v == ']':
                sub = str_stack.pop()+(sub*num_stack.pop())
            else:
                sub += v
        return sub