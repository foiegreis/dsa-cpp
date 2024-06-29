# C++ Linked Lists

A linked list in C++ is a linear data structure where **elements are not stored at contiguous locations in memory**. 

```cpp
//Cpp doesn't offer a built in implementation of Linked Lists. See the related cpp code in the folder
```

#### Functionality
- **Declaration**: Nodes of a linked list are typically defined using a structure (struct) or a class. Each node contains data and a pointer to the next node (also to the prev node in doubly linked lists)
- **Insertion**: Elements are inserted by creating new nodes and adjusting pointers.
- **Traversal**: Traversing the linked list involves iterating through nodes using pointers (Node*).
- **Deletion**: Elements can be removed by adjusting pointers and deleting nodes.

#### Types of Linked Lists 

- **Singly Linked Lists**: Each node contains data and a pointer to the next node. Traversal is unidirectional, from the head to the last node.
- **Doubly Linked Lists**: Doubly linked list contains nodes with pointers to both the next and the previous nodes, allowing traversal in both directions.
- **Circular Linked Lists**: A circular linked list is a variation where the last node points back to the head of the list, forming a circle. It can be singly or doubly linked. (Doubly and Singly)
- **Multilevel Linked Litst**: A multilevel linked list (or multi-level doubly linked list) contains nodes with an additional pointer to a child list, creating a hierarchical structure. These are used in more complex data structures, such as skip lists.

#### Common Algorithms associated with Linked Lists:
- **Reverse a Linked List**: Reverse the pointers of a singly linked list.
- **Detect Cycle in a Linked List**: Use Floyd's Cycle Detection Algorithm (Tortoise and Hare) to detect cycles.
- **Find the Middle of a Linked List**: Use slow and fast pointers to find the middle node.
- **Merge Two Sorted Lists**: Merge two sorted linked lists into one sorted list.
- **Remove N-th Node From End**: Use two-pointer technique to remove the N-th node from the end.
- **Palindrome Linked List**: Check if the linked list values form a palindrome.
- **Intersection of Two Linked Lists**: Determine if two singly linked lists intersect and find the intersection node.
- **Rotate List**: Rotate the linked list to the right by k places.
- **Remove Duplicates from Sorted List**: Remove duplicate nodes from a sorted linked list.
- **Flatten a Multilevel Doubly Linked List**: Flatten a list with child pointers into a single-level doubly linked list.


#### Pros and Cons 
- **Pros**:

    - **Dynamic Size**: Linked lists can grow or shrink in size dynamically.
    - **Insertion and Deletion**: Efficient for insertion and deletion operations, especially at the beginning or middle of the list.
    - **No Pre-allocation**: No need to pre-allocate memory like arrays.


- **Cons**:

    - **Sequential Access**: Sequential access can be slower compared to arrays due to lack of cache locality.
    - **Memory Overhead**: Requires extra memory for storing pointers alongside data.

   
#### When to Use Linked Lists

- **Dynamic Size Requirements**: When the size of the data structure needs to change dynamically.
- **Frequent Insertions and Deletions**: When frequent insertions or deletions are expected.
- **Implementation of Queues and Stacks**: Linked lists are foundational for implementing queue and stack data structures.


#### Time and Space Complexity
- **Time Complexity**:

    - Insertion: O(1) for insertion at the beginning or after a known node; O(n) for insertion at the end.
    - Deletion: O(1) for deletion at the beginning or after a known node; O(n) for deletion at the end.
    - Search: O(n) for searching a specific element.

- **Space Complexity**:

    - O(n)

#### Correspondent Python Data Structure
There is no built in data structure in Python for linked lists. You may also build it from scratch.