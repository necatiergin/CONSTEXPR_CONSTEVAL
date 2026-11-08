#include <limits>

constexpr int add(int x, int y)
{
    return x + y;
}

constexpr int a = add(10, 20); // OK

constexpr int b = add(std::numeric_limits<int>::max(), 1); // Error
