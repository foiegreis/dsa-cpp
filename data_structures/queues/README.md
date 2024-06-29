# C++ Queues

A queue in C++ is a linear data structure that follows the **FIFO** (First In First Out) principle, where elements are added to the back and removed from the front.
They are implemented in the <queue> std library.
Queues can also be created using linked lists.


```cpp
#include <iostream>
#include <queue>

std::queue<int> q;

q.push(1);  // Enqueue element
int frontElement = q.front();  // Access the front element (1)
q.pop();  // Dequeue element (removes 1)
```

#### Functionality
- **Declaration**: Queues are declared using the std::queue class

#### Operations
- **Enqueue**: Adds an element to the back of the queue using push().
- **Dequeue**: Removes the front element from the queue using pop().
- **Accessing Elements**: Front element can be accessed using front().
- **Size**: Number of elements in the queue can be obtained using size().
- **Empty**: Checks if the queue is empty using empty().


#### Pros and Cons 
- **Pros**:

    - **Efficient Operations**: O(1) time complexity for enqueue and dequeue operations.
    - **Simple Interface**: Provides a straightforward way to manage data in a FIFO manner.
    

- **Cons**:

    - **Limited Access**: Direct access to elements beyond the front is restricted.
    - **Dynamic Memory Allocation**: May involve dynamic memory allocation depending on the implementation.

#### When to Use Queues

- **Task Scheduling**: Useful for managing tasks in the order they were received.
- **Breadth-First Search (BFS)**: Fundamental data structure used in BFS algorithms.
- **Resource Management**: For scenarios where resources or tasks need to be handled in a sequential manner.

#### Time and Space Complexity
- **Time Complexity**:

    - Enqueue, dequeue, front: O(1)
    - Size, empty: O(1)

- **Space Complexity**:
    - O(n) where n is the number of elements in the queue.

#### Correspondent Python Data Structure
Queue. In Python, queues can be implemented using the queue.Queue class, which provides similar functionalities for managing data in a FIFO manner.