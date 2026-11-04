consteval int foo(int x)
{
    int y = x * 2;
    return y + 1;
}

constexpr int result = foo(10); // OK
