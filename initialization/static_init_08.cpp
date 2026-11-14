int foo();

struct Nec {
    constexpr Nec(int x) : mx{ x } {}

    int mx;
};

Nec a{ 42 };
Nec b{ foo() };
