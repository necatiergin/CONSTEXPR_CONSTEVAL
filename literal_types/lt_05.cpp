struct A {
    int x;

    constexpr A(int n) : x(n) {}
};

struct B {
    int x;

    B(int n) : x(n) {}
};

constexpr A a{10}; // OK
constexpr B b{10}; // Error

//A is a literal type
//B is not a literal type
