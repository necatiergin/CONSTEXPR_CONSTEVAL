#include <type_traits>

constexpr int foo(int x)
{
    if (std::is_constant_evaluated())
        return x * 2;

    return x * 3;
}

constexpr int a = foo(10); // 20

int main()
{
    int x = 10;

    int y = foo(x); // 30
}
