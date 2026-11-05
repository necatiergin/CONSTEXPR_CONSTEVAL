#include <iostream>

constexpr int foo(int x)
{
    if consteval {
        return x * 2;
    }
    else {
        return x * 3;
    }
}

int main()
{
    constexpr auto val = foo(21);
    int ival{ 3};

    std::cout << foo(ival);
}
