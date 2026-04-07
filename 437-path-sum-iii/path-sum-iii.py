# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import defaultdict
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        self.path = 0
        self.ddict = defaultdict(int)
        self.ddict[0] = 1
        def dfs(root, currSum):
            if not root:
                return
            currSum += root.val
            self.path += self.ddict[currSum - targetSum]
            self.ddict[currSum] += 1
            dfs(root.left, currSum)
            dfs(root.right, currSum)
            self.ddict[currSum] -= 1
        dfs(root, 0)
        return self.path