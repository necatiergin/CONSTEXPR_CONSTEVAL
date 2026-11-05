struct Number {
    int value;
    consteval Number(int x) : value{ x } {}
};

constexpr Number n{ 42 };
