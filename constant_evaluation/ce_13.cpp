constexpr int foo(int x)
{
    if (x > 0)
        return 100 / x;

    if (x == 0)
        return 0;

    throw 10;
}

constexpr int a = foo(10); // OK
constexpr int b = foo(0);  // OK
constexpr int c = foo(-1); // Error
