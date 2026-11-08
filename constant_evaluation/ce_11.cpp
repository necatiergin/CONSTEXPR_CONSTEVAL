constexpr int foo()
{
    int x = 10;

    auto p = reinterpret_cast<char*>(&x);

    return x;
}

constexpr int a = foo(); // Error
