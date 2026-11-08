struct X {
    ~X() {}
};

constexpr int foo(int val)
{
    if (val < 0) {
        X x;
        return 1;
    }
    return 10;
}

int main()
{
    constexpr int val = foo(123);
    //error in C++20 valid in C++23
}
