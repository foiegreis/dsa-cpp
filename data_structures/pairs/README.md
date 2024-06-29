# C++ Pair 

A pair in C++ is a simple container that can store **two heterogeneous objects as a single entity**.

```cpp
#include <iostream>
#include <utility> // for std::pair

std::pair<int, double> myPair(10, 3.14);

// Accessing elements of a pair
std::cout << "First element: " << myPair.first << std::endl;
std::cout << "Second element: " << myPair.second << std::endl;

```

#### Functionality
- **Declaration**: Pairs are declared using the std::pair template class, which allows combining two objects of different types.
- **Initialization**: Pairs can be initialized using constructors, std::make_pair, or aggregate initialization.
- **Accessing Elements**: Elements in a pair can be accessed using .first and .second member variables.

#### Pros and Cons 
- **Pros**:
    - **Simple and Lightweight**: Pairs are straightforward and lightweight containers for holding two related values.
    - **Convenient**: Provides a convenient way to group two objects together without creating a custom struct or class.
    - **Comparison Operators**: Supports all standard comparison operators.

- **Cons**:
    - **Limited to Two Elements**: Pairs are limited to holding exactly two elements and do not provide flexibility for more elements.

#### When to Use Pairs
- **Related Data**: When you need to store and manipulate two related values together.
- **Return Multiple Values**: Useful for functions that need to return two values.
- **Simple Key-Value Pairs**: When a more complex structure like std::map is unnecessary.

#### Time and Space Complexity
- **Time Complexity*:

    - Accessing elements: O(1)
    - Copying a pair: O(1)
- **Space Complexity**:
    - O(1) per pair

#### Correspondent Python Data Structure
- Tuple. In Python, the closest equivalent is a tuple, though Python tuples can hold more than two elements and are more flexible.

