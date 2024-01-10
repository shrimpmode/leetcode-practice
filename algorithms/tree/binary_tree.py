from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

    def __str__(self):
        return str(self.val)


def dfs(root:TreeNode) -> None:
    if root:
        print(root)
        dfs(root.left)
        dfs(root.right)


def create_tree(values: list[int]) -> Optional[TreeNode]:
    if not values:
        return None

    root_node = TreeNode(values[0])
    queue = [root_node]
    i = 1

    while queue and i < len(values):
        current = queue.pop(0)

        if values[i] is not None:
            left = TreeNode(values[i])
            current.left = left
            queue.append(left)
        i += 1

        if i >= len(values):
            break

        if values[i] is not None:
            right = TreeNode(values[i])
            current.right = right
            queue.append(right)
        i += 1

    return root_node


values = [1, 2, 2, 3, 4, 4, 3]

root = create_tree(values)
dfs(root)
