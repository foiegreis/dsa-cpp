# C++ Trees

Trees in C++ provide hierarchical data structures that are widely used for organizing data in a hierarchical manner. The Standard Library does not provide built-in tree implementations, but various types of trees can be implemented manually or using third-party libraries.

#### Basic Tree Terminology
- **Node**: A fundamental unit of a tree that stores data and references to its child nodes.
- **Edge**: A connection between nodes that represents the relationships in the tree.
- **Root**: The topmost node of the tree that has no parent.
- **Parent**: A node that has one or more child nodes.
- **Child**: A node directly connected to another node when moving away from the root.
- **Leaf**: A node that has no children.
- **Subtree**: A tree structure formed by a node and all its descendants.


#### Types of Trees
- **Binary Trees**: Trees where each node has at most two children.
- **Binary Search Trees (BST)**: Binary trees with a specific ordering property where the left subtree of a node contains only nodes with keys less than the node's key and the right subtree only nodes with keys greater than the node's key.
- **AVL Trees**: Self-balancing binary search trees where the difference in heights between the left and right subtrees of every node is at most one.
- **Heaps**: Complete binary trees where every parent node has a value less than or equal to (or greater than or equal to) the values of its children nodes.
- **Tries (Prefix Trees)**: Trees used to store a dynamic set of strings where each node represents a common prefix of its child nodes.
- **General Trees**: Trees where each node can have any number of children.


#### Operations on Trees
- **Traversal**: Visiting nodes in a specific order.
- **Preorder**: Visit root, left subtree, right subtree.
- **Inorder**: Visit left subtree, root, right subtree (useful for BST).
- **Postorder**: Visit left subtree, right subtree, root.
- **Insertion**: Adding new nodes to the tree.
- **Deletion**: Removing nodes from the tree.
- **Searching**: Finding a specific node or value within the tree.
- **Balancing**: Ensuring the tree remains balanced (e.g., AVL trees).
- **Serialization and Deserialization**: Converting tree structure into a linear data format and vice versa.
- **Traversal and Pathfinding**: Finding paths between nodes or specific patterns within the tree.

#### When to Use Trees
- **Hierarchical Data**: Natural representation of hierarchical data structures like file systems, organization charts, etc.
- **Sorted Data Storage**: Efficiently store and retrieve sorted data using BST or AVL trees.
- **Priority Queue**: Implementing heaps for priority queue operations.
- **Dictionary and Autocomplete**: Trie structures for fast prefix-based lookups and autocomplete functionalities.

#### Time and Space Complexity
- Depends on Tree Type: Time complexities range from O(log n) for balanced binary trees (e.g., AVL, red-black trees) to O(n) for unbalanced structures.
- Space Efficiency: Generally O(n) space complexity due to overhead and storage requirements for nodes

#### Correspondent Python Data Structure
BST: Python does not have a built-in BST class, but similar functionality can be achieved using custom implementations or third-party libraries.
AVL Tree: Similarly, Python lacks a built-in AVL Tree class but can be implemented manually or using external libraries.
Heap: Python's heapq module provides functionalities for heap operations.
Trie: Python does not have a native Trie class, but implementations can be found in third-party libraries.