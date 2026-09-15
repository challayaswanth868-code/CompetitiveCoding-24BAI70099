# Experiment 7 – Add Digits

## Subject

CC-II (24CSP-339)

## Problem

**LeetCode Problem #258 – Add Digits**

## Problem Statement

Given a non-negative integer `num`, repeatedly add all of its digits until the result is a single digit, and return that digit.

## Examples

* `38 → 3 + 8 = 11 → 1 + 1 = 2`
* `99 → 9 + 9 = 18 → 1 + 8 = 9`
* `12345 → 1 + 2 + 3 + 4 + 5 = 15 → 1 + 5 = 6`
* `0 → 0`

## Approach

The optimized approach uses the **digital root formula**.

For `num = 0`, the answer is `0`.

For a positive number:

```text
1 + (num - 1) % 9
```

This gives the digital root directly without repeatedly summing the digits.

## Algorithm

1. Read the non-negative integer `num`.
2. If `num` is `0`, return `0`.
3. Calculate `1 + (num - 1) % 9`.
4. Return the result.

## C++ Program

```cpp
#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        }

        return 1 + (num - 1) % 9;
    }
};

int main() {
    Solution solution;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Digital root: " << solution.addDigits(num) << endl;

    return 0;
}
```

## Test Cases

| Input | Expected Output |
| ----: | --------------: |
|    38 |               2 |
|     0 |               0 |
|    99 |               9 |
| 12345 |               6 |

## Complexity Analysis

### Time Complexity

**O(1)**

The digital-root formula performs a fixed number of arithmetic operations.

### Space Complexity

**O(1)**

Only a constant amount of extra space is used.

## Result

The Add Digits problem was successfully implemented in C++ using the optimized digital-root formula and tested with multiple inputs.
