constexpr int foo()
{
    return 42;
}

int bar()
{
    return 42;
}

struct Nec{
    int x;

    constexpr Nec(int val) : x{ val } {}
};

Nec nec1{ foo() }; //constant init - static init.
Nec nec2{ bar()}; //dynamic init.
