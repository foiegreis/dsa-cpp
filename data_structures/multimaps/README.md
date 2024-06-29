# C++ MultiMaps

A multimap in C++ is a container that stores key-value pairs, like maps, but where keys can have multiple associated values. 
Elements are automatically sorted by keys.
The std::multimap class in the Standard Library provides a way to manage multimaps, allowing multiple values per key and sorting elements by keys.

```cpp
#include <iostream>
#include <map>

std::multimap<int, std::string> numbers = {{1, "one"}, {2, "two"}, {2, "another two"}, {3, "three"}};

// Inserting new elements for already existing keyor new keys
numbers.insert({2, "yet another two"});
numbers.insert({4, "four"});
```

#### Functionality
- **Declaration**: Multimaps are declared using the std::multimap template class.
- **Initialization**: Multimaps can be initialized using initializer lists, other multimaps, or by inserting elements individually.
- **Accessing Elements**: Elements in a multimap are accessed using keys, and values associated with each key can be iterated through. Elements of the multimap are pairs.

#### Pros and Cons 
- **Pros**:

    - **Multiple Values per Key**: Allows storing multiple values associated with the same key.
    - **Automatic Ordering**: Elements are automatically sorted by keys.
    - **Efficient Search**: Provides efficient search operations with average time complexity of O(log n).

- **Cons**:

    - **No Direct Access by Index**: Elements are accessed by keys, not by index.
    - **Overhead**: May have more overhead compared to other containers due to ordering and key-value management.

#### When to Use Multimaps

- **Multiple Values per Key**: When you need to store multiple values associated with the same key.
- **Ordered Data**: When you need elements to be automatically ordered by keys.

#### Time and Space Complexity
- **Time Complexity**:

    - Insertion: O(log n)
    - Deletion: O(log n)
    - Search: O(log n)

- **Space Complexity**:
    - O(n) 

#### Correspondent Python Data Structure
Dictionary. In Python, the dict class provides similar functionality for storing key-value pairs, but it **does not directly support multiple values per key** like std::multimap.