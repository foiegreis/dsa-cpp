# C++ Stacks

A stack in C++ is a Last In First Out (**LIFO**) data structure that allows operations on elements in a sequential manner. 
It follows the principle of pushing elements onto the top of the stack and popping elements off from the top.
Stacks can also be implemented using arrays or linked lists.


```cpp
#include <iostream>
#include <stack>

std::stack<int> stack;

stack.push(1);
stack.push(2);
std::cout << "Top element: " << stack.top() << std::endl; // Output: Top element: 2

stack.pop();
std::cout << "Top element after pop: " << stack.top() << std::endl; // Output: Top element after pop: 1

```

#### Functionality
- **Declaration**: Stacks are declared using the std::stack class template.

#### Operations

- **Push**: Adds an element to the top of the stack using push().
- **Pop**: Removes the top element from the stack using pop().
- **Accessing Elements**: Top element can be accessed using top().
- **Size**: Number of elements in the stack can be obtained using size().
- **Empty**: Checks if the stack is empty using empty().

#### Pros and Cons 
- **Pros**:

    - **Efficient Operations**: O(1) time complexity for push and pop operations.
    - **Simple Interface**: Provides a straightforward way to manage data in a LIFO manner.
    

- **Cons**:

    - **Limited Access**: Direct access to elements beyond the front is restricted.
    - **Dynamic Memory Allocation**: May involve dynamic memory allocation depending on the implementation.

#### When to Use Stacks

- **Expression Evaluation**: Useful for evaluating expressions in programming languages.
- **Backtracking**: Essential for backtracking algorithms where last-in values need to be revisited.
- **Undo Mechanisms**: Implemented in undo functionality to revert operations in reverse order.

#### Time and Space Complexity
- **Time Complexity**:

    - Push, pop, top: O(1)
    - Size, empty: O(1)

- **Space Complexity**:
    - O(n) where n is the number of elements in the stack.

#### Correspondent Python Data Structure
Stack. In Python, stacks can be implemented using the list data type, which provides similar functionalities for managing data in a LIFO manner.





