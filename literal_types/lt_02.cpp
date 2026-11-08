struct X {
    ~X() {}
};

constexpr int foo(bool b)
{
    if (b) {
        X x;
    }

    return 10;
}

constexpr int a = foo(false); // OK in C++23
