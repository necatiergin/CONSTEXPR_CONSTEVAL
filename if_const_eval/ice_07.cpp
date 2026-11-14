#include <type_traits>

consteval int twice(int x)
{
    return x * 2;
}

constexpr int foo(int x)
{
    if (std::is_constant_evaluated()) {
        return twice(x);  // Error in C++20, valid in C++23
    }
    else {
        return x * 3;
    }
}
