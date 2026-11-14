struct Nec {
    constexpr Nec(int x) : mx{ x } {}

    int mx;
};

Nec a{ 10 }; // constant init. a is not a constexpr variable
const Nec b{ 20 }; // constant init. b is not a constexpr variable
constexpr Nec c{ 30 }; // constant init. c is a constexpr variable
