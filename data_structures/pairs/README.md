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
- **Initialization**: Pairs can be initialized directly or through assignment.
- **Accessing Elements**: Elements in a pair can be accessed using .first and .second member variables.

#### Pros and Cons of Pairs
- **Pros**:
    - **Simple and Lightweight**: Pairs are straightforward and lightweight containers for holding two related values.
    - **Convenient**: Provides a convenient way to group two objects together without creating a custom struct or class.

- **Cons**:
    - **Limited to Two Elements**: Pairs are limited to holding exactly two elements and do not provide flexibility for more elements.

#### Use Cases
Pairs are useful when you need to combine two values that are conceptually related, such as returning multiple values from a function or storing key-value pairs.

#### Correspondent Python Data Structure
- Tuple (in Python, tuples can hold heterogeneous elements, including pairs)

