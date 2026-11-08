#include <type_traits>

constexpr int foo()
{
    return std::is_constant_evaluated() ? 10 : 20;
}

constexpr int x = foo();  // 10

static_assert(foo() == 10);

int main()
{
    int a = foo();  // 20

    constexpr int b = foo();  // 10

    if constexpr (foo() == 10) {
        // This branch is selected.
    }
}
