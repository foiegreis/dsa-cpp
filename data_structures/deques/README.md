# C++ Deques

A deque (double-ended queue) in C++ is a dynamic array-like container with the ability to efficiently add or remove elements from both ends. It combines the properties of arrays and queues, providing fast insertion and deletion at both ends of the sequence.


```cpp
#include <iostream>
#include <deques>
std::deque<int> deque;

// Insert elements at back
deque.push_back(1);
deque.push_back(2);

// Insert elements at front
deque.push_front(3);
```

#### Functionality
- **Declaration**: Deques are declared using the std::deque class.

#### Operations
- push_back(): Adds an element to the back.
- push_front(): Adds an element to the front.
- pop_back(): Removes an element from the back.
- pop_front(): Removes an element from the front.
- front(): Accesses the element at the front.
- back(): Accesses the element at the back.
- size(): Returns the number of elements in the deque.
- empty(): Checks if the deque is empty.

#### Pros and Cons 
- **Pros**:

    - **Efficient Operations**: O(1) time complexity for insertion and deletion at both ends.
    - **Dynamic Sizing**: Automatically adjusts its size as elements are added or removed.

- **Cons**:

    - **Memory Management**: May involve dynamic memory allocation.
    - **Overhead**: Slight overhead compared to static arrays due to dynamic resizing.

#### When to Use Deques

- **Efficient Insertion and Removal**: When operations are needed at both ends of the sequence.
- **Queue-like Behavior**: As an alternative to queues when insertion and deletion are required at both ends.
- **Flexibility**: Use cases where the size and order of operations on elements are unpredictable.

#### Time and Space Complexity
- **Time Complexity**:

    - Insertion (both ends), deletion (both ends), access to front and back: O(1)

- **Space Complexity**:
    - O(n) where n is the number of elements in the deque.


#### Correspondent Python Data Structure
Deque. In Python, deques are implemented using the collections.deque class, providing similar functionalities for managing double-ended queues efficiently.