Instead of using `std::vector<bool>`, consider using `std::vector<char>` or `std::vector<int>` (using only the least significant bit) if you don't need the optimization of bit packing. This will provide more predictable and efficient behavior.  

Example:
```cpp
#include <iostream>
#include <vector>

int main() {
  // Problematic approach
  std::vector<bool> boolVector(10);

  // Better approach
  std::vector<char> charVector(10);

  // use charVector instead of boolVector

  return 0;
}
```