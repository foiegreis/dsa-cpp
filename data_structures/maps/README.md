# C++ Maps

A map in C++ is a container that stores key-value pairs, where each key is unique. Elements are authomatically sorted by keys.
The `std::map` class in the Standard Library provides a way to manage maps, automatically sorting the elements by keys.

```cpp
#include <iostream>
#include <map>

std::map<int, std::string> numbers = {{1, "one"}, {2, "two"}, {3, "three"}};
numbers[4] = "four";

```

#### Functionality
- **Declaration**: Maps are declared using the std::map template class.
- **Initialization**: Maps can be initialized using initializer lists, other maps, or by inserting elements individually.
- **Accessing Elements**: Elements in a map are accessed using keys.

#### Pros and Cons 
- **Pros**:

    - **Unique Keys**: Maps do not allow duplicate keys.
    - **Automatic Ordering**: Elements are automatically sorted by keys.
    - **Efficient Search**: Provides efficient search operations with average time complexity of O(log n).


- **Cons**:

    - **No Direct Access by Index**: Elements are accessed by keys, not by index.
    - **Overhead**: May have more overhead compared to other containers due to ordering and key-value management.

#### When to Use Maps

- **Unique Key-Value Pairs**: When you need to store unique key-value pairs.
- **Frequent Searches**: When efficient search operations are required.
- **Ordered Data**: When you need elements to be automatically ordered by keys.

#### Time and Space Complexity
- **Time Complexity**:

    - Insertion: O(log n)
    - Deletion: O(log n)
    - Search: O(log n)

- **Space Complexity**:
    - O(n) 

#### Correspondent Python Data Structure
Dictionary. In Python, the dict class provides similar functionality for storing key-value pairs.
