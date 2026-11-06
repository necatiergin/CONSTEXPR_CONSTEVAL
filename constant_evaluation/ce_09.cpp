constexpr int foo(int x)
{
    if (x < 0)
        throw x;

    return x * x;
}

constexpr int a = foo(5);  // OK
constexpr int b = foo(-5); // Error
