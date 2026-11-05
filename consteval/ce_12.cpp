consteval int square(int x)
{
    return x * x;
}

consteval int foo(int x)
{
    return square(x); // OK (immediate function context)
}

int main()
{
    constexpr int a = foo(10); // OK
}
