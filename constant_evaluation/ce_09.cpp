int func(int x)
{
    return x * 2;
}

constexpr int foo(int x)
{
    if (x > 0)
        return func(x);

    return 0;
}

constexpr int a = foo(0); // OK
constexpr int b = foo(5); // Error
