# C++ Sets

A set in C++ is a container that stores unique elements in a specific order. The `std::set` class in the Standard Library provides a way to manage sets, ensuring that each element appears only once and is automatically ordered.

```cpp
#include <iostream>
#include <set>

std::set<int> set1 = {1, 2, 3, 4, 5};
set1.insert(6);
set1.erase(2);

size_t size = set1.size();
```

#### Functionality
- **Declaration**: Sets are declared using the std::set template class.
- **Initialization**: Sets can be initialized using initializer lists, other sets, or by inserting elements individually.
- **Accessing Elements**: Elements in a set are accessed using iterators since **sets do not support direct indexing**.

#### Pros and Cons 
- **Pros**:

     - **Unique Elements**: Sets ensure that each element is unique.
    - **Automatic Ordering**: Elements are stored in a specific order.
    - **Efficient Search**: Sets provide efficient search operations with average time complexity of O(log n).

- **Cons**:

    - **No Direct Access**: Does not support direct indexing.
    - **Overhead**: May have more overhead compared to other containers due to ordering and uniqueness enforcement.

#### When to Use Sets
- **Unique Elements Requirement**: When you need to store unique elements.
- **Frequent Searches**: When efficient search operations are required.
- **Ordered Data**: When you need elements to be automatically ordered.

#### Time and Space Complexity
- **Time Complexity**:

- Insertion: O(log n)
- Deletion: O(log n)
- Search: O(log n)

- **Space Complexity**:
    - O(n) per set

#### Correspondent Python Data Structure
Set. In Python, sets provide similar functionalities for storing unique elements.