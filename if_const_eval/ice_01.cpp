constexpr int foo(int x)
{
    if consteval
        return x * x;  // Error - no compound statement

    return x;
}
