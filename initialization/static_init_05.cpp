struct Nec {
    int x;
    constexpr Nec(int val) : x{ val } {}
};

Nec gnec{ 10 }; // constant init. (static init)
