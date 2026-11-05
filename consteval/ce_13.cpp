consteval int square(int x)
{
    return x * x;
}

constexpr int foo(int x)
{
    return square(x); // C++20: Error - not immediate fucntion context
}
