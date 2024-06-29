# C++ Bitsets

Bitset in C++ is a fixed-size sequence of N bits. It allows efficient manipulation of individual bits, making it useful for tasks that require bitwise operations. The `std::bitset` class provides a way to manage bitsets.

```cpp
#include <iostream>
#include <bitset>

std::bitset<8> bits1;  // Default initialization (all bits are 0)
```

#### Functionality
- **Declaration**: Bitsets are declared using the std::bitset<N> template class, where N is the number of bits.
- **Initialization**: Bitsets can be initialized using unsigned integers, strings, or by default (all bits set to 0).
- **Accessing Elements**: Individual bits can be accessed and manipulated using member functions.

#### Pros and Cons 
- **Pros**:

    - **Memory Efficiency**: Uses less memory compared to other containers for storing bits.
    - **Fast Bitwise Operations**: Supports fast bitwise operations.
    - **Fixed Size**: Ensures a fixed number of bits, useful for certain applications.

- **Cons**:

    - **Fixed Size**: The size of a bitset is fixed at compile time and cannot be changed.
    - **Limited to Integral Types**: Initialization is limited to integral types and strings.

#### When to Use Bitsets
    - **Bitwise Operations**: When you need to perform efficient bitwise operations.
    - **Memory Efficiency**: When you need a memory-efficient way to store and manipulate bits.
    - **Fixed-Size Bit Sequences**: When you need a fixed number of bits.

#### Time and Space Complexity
- **Time Complexity**:

    - Bit Manipulation: O(1)
    - Bitwise Operations: O(N)

- **Space Complexity**:
    - O(1) per bit

#### Correspondent Python Data Structure
Integer. In Python, integers can be used for bitwise operations.
