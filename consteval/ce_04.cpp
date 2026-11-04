consteval int foo(int x)
{
    constexpr int y = x; // Error
    //x is not a constant expression

    return y;
}
