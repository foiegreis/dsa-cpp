# C++ Multisets

A multiset in C++ is a container that stores elements, allowing for multiple instances of the same value. Elements are stored in order.
The `std::multiset` class in the Standard Library provides a way to manage multisets. Multiset is part of <set>.

```cpp
#include <iostream>
#include <set>

std::multiset<int> numbers = {1, 2, 2, 3, 4, 5};
numbers.insert(3);

```

#### Functionality
- **Declaration**: Multisets are declared using the std::multiset template class.
- **Initialization**: Multisets can be initialized using initializer lists, other multisets, or by inserting elements individually.
- **Accessing Elements**: Elements in a multiset are accessed using iterators since multisets do not support direct indexing.

#### Pros and Cons 
- **Pros**:

    - **Allows Duplicates**: Multisets allow multiple instances of the same element.
    - **Automatic Ordering**: Elements are stored in a specific order.
    - **Efficient Search**: Provides efficient search operations with average time complexity of O(log n).

- **Cons**:

    - **No Direct Access**: Does not support direct indexing.
    - **Overhead**: May have more overhead compared to other containers due to ordering and allowance of duplicates.

#### When to Use Multisets

- **Duplicate Elements**: When you need to store multiple instances of the same element.
- **Frequent Searches**: When efficient search operations are required.
- **Ordered Data**: When you need elements to be automatically ordered.


#### Time and Space Complexity
- **Time Complexity**:

    - Insertion, deletion, search: O(log n)

- **Space Complexity**:
    - O(n) per multiset

#### Correspondent Python Data Structure
Collections.Counter. In Python, the collections.Counter class provides similar functionality for storing elements with counts.