# C++ Vectors

A vector in C++ is a **dynamic** array that can resize itself automatically when elements are added or removed.
The elements of a std::vector are guaranteed to be stored in contiguous memory locations.

```cpp
#include <vector>

std::vector<int> numbers = {1, 2, 3, 4, 5};
std::cout << numbers[0] << std::endl;

// Adding elements to the vector
numbers.push_back(6);

// Accessing elements
for (int num : numbers) {
    std::cout << num << " ";
}
std::cout << std::endl;

```

#### Functionality
- **Declaration**: Vectors are declared using the std::vector template class, which provides dynamic resizing capabilities.
- **Initialization**: Vectors can be initialized using initializer lists or other vectors.
- **Accessing Elements**: Elements in a vector can be accessed using the subscript operator [].
- **Dynamic Resizing**: Vectors resize themselves dynamically when elements are added or removed, managing memory automatically.

#### Methods and Constructors
- vec2 = std::move(vec1); // Moves resources from vec1 to vec2
- vec.reserve(10); // Reserves space for at least 10 elements
- vec.resize(5); // Resizes vector to contain 5 elements, default-initialized
- vec.resize(7, 0); // Resizes vector to 7 elements, initializes new elements to 0
- vec.push_back(4); // Adds 4 to the end of the vector
- points.emplace_back(1, 2); // Useful for constructing elements with non-default constructors, ad the end of the vector



#### Pros and Cons 

- **Pros**:

    - **Dynamic Size**: Vectors can resize themselves dynamically at runtime, accommodating changes in size.
    - **Memory Management**: Handles memory allocation and deallocation automatically.
    - **Efficient Insertion and Deletion**: Adding or removing elements is efficient due to automatic resizing and moving of elements.
    - **Range-Based for Loop**: Supports convenient traversal using range-based for loops.

- **Cons**:

    - **Overhead**: Vectors may have slight overhead compared to raw arrays due to managing dynamic memory.
    - **Insertion and Deletion Complexity**: Inserting or deleting elements in the middle of a vector can be costly in terms of time complexity.

#### When to Use Vectors
- **Dynamic Data Size**: When the size of the data is not known beforehand or may change during runtime, vectors are preferred.
- **Flexibility**: For scenarios requiring frequent insertion and deletion of elements where resizing is necessary, vectors provide flexibility.
- **Compatibility**: Vectors are compatible with many algorithms and libraries in C++ that expect dynamic arrays.

#### Time and Space Complexity
- **Time Complexity**:

    - Indexing: O(1)
    - Insertion or deletion at the end: Amortized O(1)
    - Insertion or deletion in the middle: O(n)

- **Space Complexity**

    - Indexing: O(n)
    
#### Correspondent Python Data Structure
- List