# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def fun(self,root, leaf):
        self.root = root
        if not self.root:
            return
        if not root.left and not root.right:
            leaf.append(root.val)
            return
        self.fun(root.left, leaf)
        self.fun(root.right, leaf)

    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        leaf1 = []
        leaf2 = []
        root1 = self.fun(root1, leaf1)
        root2 = self.fun(root2, leaf2)
        return leaf1 == leaf2