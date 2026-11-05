struct Foo {
    consteval int twice(int x) const
    {
        return 2 * x;
    }
};

constexpr Foo f;
constexpr int x = f.twice(10);
