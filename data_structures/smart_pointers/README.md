# C++ Smart Pointers

Smart pointers in C++ are objects that mimic pointers but provide additional features such as automatic memory management. They ensure proper memory deallocation and prevent memory leaks, making them a safer alternative to raw pointers.
Smart pointers are part of the <memory> header and are defined within the std namespace.
There are three types of smart pointers:
- unique_ptr
- shared_ptr
- weak_ptr


```cpp
#include <iostream>
#include <memory>
std::shared_ptr<int> ptr1 = std::make_shared<int>(20);
std::weak_ptr<int> weakPtr = sharedPtr; // Does not contribute to ownership
std::unique_ptr<int> ptr2 = std::make_unique<int>(10);
```

#### Functionality
- **Declaration**: Smart pointers are declared using the std::unique_ptr, std::shared_ptr, and std::weak_ptr classes.
- **Initialization**: Smart pointers can be initialized using std::make_unique and std::make_shared for automatic memory allocation.
- **Ownership**: std::unique_ptr provides exclusive ownership, std::shared_ptr provides shared ownership, and std::weak_ptr provides non-owning weak references.
- **Accessing Elements**: Smart pointers behave like raw pointers and can be dereferenced using the * operator.


#### Pros and Cons 
- **Pros**:

    - **Memory Management**: Automatically handles memory deallocation.
    - **Safety**: Helps prevent memory leaks and dangling pointers.
    - **Shared Ownership**: std::shared_ptr supports shared ownership across multiple pointers.

- **Cons**:

    - **Overhead**: Slightly higher overhead than raw pointers due to additional features.
    - **Complexity**: Requires understanding of ownership semantics (e.g., weak references)..

#### When to Use Smart Pointers
- **Dynamic Memory**: Use when managing dynamically allocated memory to ensure proper cleanup.
- **Resource Management**: Useful for managing resources like files, database connections, etc.
- **Thread Safety**: std::shared_ptr provides thread-safe shared ownership.

#### Time and Space Complexity
- **Time Complexity**:

    - Smart pointers have constant time complexity for accessing and modifying pointers (O(1)).

- **Space Complexity**:
    - Occupies additional space compared to raw pointers due to storing metadata for memory management.

#### Correspondent Python Data Structure
Smart pointers in C++ have counterparts in Python with different idioms and practices, often utilizing garbage collection and reference counting in Python's memory management.

