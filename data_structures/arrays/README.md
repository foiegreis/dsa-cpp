# C++ Arrays

An array in C++ is a collection of elements, all of the **same type**, stored in **contiguous** memory locations. 

```cpp
int size = 5;
int numbers[size] = {1, 2, 3, 4, 5};

std::cout << numbers[0];

void func(const int arr[], const int size){}
```

#### Functionality

- **Declaration**: Arrays can be declared with a specified size and data type.
- **Initialization**: Arrays can be initialized at the time of declaration.
- **Accessing Elements**: Arrays allow indexing.
- **Multidimensional Arrays**: C++ supports multidimensional arrays


#### Pros and Cons of Arrays

- **Pros**:

    - **Direct Access**: Provides direct access to any element using its index
    - **Fixed Size**: The size is defined at compile-time, leading to optimized memory allocation.
    - **Memory Contiguity**: Since elements are stored in contiguous memory locations, arrays benefit from cache optimization.
    - **Simple Syntax**: Arrays have a straightforward syntax for declaration, initialization, and access.

- **Cons**:

    - **Fixed Size**: The size of an array cannot be altered at runtime, leading to potential wastage of memory if the array is not fully utilized or overflow if the size is underestimated.
    - **Insertion and Deletion are impractical**: Inserting and deleting elements requires shifting all subsequent or precedent elements.
    - **No Bounds Checking**: Accessing an element outside the array bounds can lead to undefined behavior and potential program crashes.
    - **Lack of Flexibility**: Arrays cannot grow or shrink dynamically; hence they lack the flexibility of other data structures like vectors in C++.


#### When to Use Arrays
- **Static Data Size**: When the size of the data is known at compile-time and does not change, arrays are a suitable choice.
- **Performance-Critical Applications**: Due to their direct access nature and memory contiguity, arrays are preferred in performance-critical sections of code.
- **Simple Data Manipulations**: For simple storage and manipulation of homogeneous data types, arrays are ideal.


#### Time and Space Complexity

- **Time Complexity**
    - **Indexing**: O(1)


- **Space Complexity**
    - **Indexing**: O(n)


#### Correspondent Python Data Structure

List





