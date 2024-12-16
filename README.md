# std::vector<bool> Optimization Gotchas in C++

This repository demonstrates a common, yet often overlooked, issue with `std::vector<bool>` in C++.  Due to optimizations, it doesn't behave like a standard vector. This example shows the problem and a solution.

## The Problem

`std::vector<bool>` is specially optimized to save space by storing booleans as bits, not full bytes.  This optimization leads to non-standard behavior:

* **Slower element access:** Accessing individual elements can be less efficient.
* **Non-standard iterator behavior:** Iterators don't always work as expected.
* **No direct element access via `[]`:**  You can use `operator[]`, but it doesn't return a boolean reference, causing potential issues with modification.

## The Solution

For typical boolean vector usage, it's recommended to stick with `std::vector<bool>` only if memory saving is critical.  Otherwise, using `std::vector<char>` for better performance is more advisable.  In most cases, memory impact is negligible, and the improved performance of element access and iterator behavior outweighs this potential concern.