# Data Structure and Algorithms

## Patterns

**4 Genaral Rules for solving a pettern**
1. Always use nested loops for printing the patterns.
   - Outer loops - rows.
   - Inner loops - columns.
```
	ROW →
    ┌────────┐
    │ * * *  │
    │ * * *  │ C
    │ * * *  │ O
    │ * *  * │ L
    └────────┘
```

2. For `inner loops` , focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the require number of columns to be printed.
3. Print inside loop.
4. Observe symmetry in the pattern.

## STL (Standard Template Library)

- STL is a set of template classes and functions that provides the implementation of common data structure and algorithms.

```Cpp
// Basic I/O
#include <iostream>    // cin, cout
#include <iomanip>     // setprecision, setw

// Containers
#include <vector>      // vector
#include <set>         // set, multiset
#include <map>         // map, multimap
#include <queue>       // queue, priority_queue
#include <stack>       // stack
#include <deque>       // deque
#include <list>        // list

// Other utilities
#include <string>      // string class
#include <algorithm>   // sort, reverse, max, min, etc.
#include <utility>     // pair
#include <functional>  // function objects
#include <cmath>       // mathematical functions
#include <cstring>     // C-style string functions
#include <cstdlib>     // general utilities
#include <iterator>    // iterators
```

- Vector is like a resizable array. T
  - The size of array cannot be modified.
  - Vector can grow or shrink in size as needed.

## Recursion

- A function calls it self until a specific condition is met.

### Resources

[takeuforward](https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/)