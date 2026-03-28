class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

        def __str__(self):
            return str(self.data)
class BinaryTree:
    def __init__(self, data):
        node = Node(data)
        self.root = node

if __name__ == "__main__":
    # Example usage
    tree = BinaryTree(1)
    tree.root.left = Node(2)
    tree.root.right = Node(3)
    tree.root.left.left = Node(4)
    tree.root.left.right = Node(5)

    print(tree.root.data)  # Output: 1
    print(tree.root.left.data)  # Output: 2
    print(tree.root.right.data)  # Output: 3