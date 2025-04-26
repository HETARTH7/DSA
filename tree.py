import collections


class Node:
    def __init__(self, value):
        self.val = value
        self.left = None
        self.right = None

# Time Complexity: O(n)


def preorder(root):
    if not root:
        return None
    print(root.val)
    preorder(root.left)
    preorder(root.right)

# Time Complexity: O(n)


def inorder(root):
    if not root:
        return None
    inorder(root.left)
    print(root.val)
    inorder(root.right)

# Time Complexity: O(n)


def postorder(root):
    if not root:
        return None
    postorder(root.left)
    postorder(root.right)
    print(root.val)

# Time Complexity: O(n)


def levelOrderTraversal(root):
    q = collections.deque()
    q.index(root)

    while q:
        node = q.popleft()
        print(node)
        if node.left:
            q.insert(node.left)
        if node.right:
            q.insert(node.right)


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

print("Inorder traversal ")
inorder(root)

print("\nPreorder traversal ")
preorder(root)

print("\nPostorder traversal ")
postorder(root)
