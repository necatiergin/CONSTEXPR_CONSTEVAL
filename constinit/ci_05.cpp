struct Myclass {
    constexpr Myclass(int x) : value{ x } {}

    ~Myclass() {}  //dtor is not constexpr

    int value;
};

constinit Myclass obj{ 42 }; // valid - constant init.
constexpr Myclass x{ 42 }; // error

