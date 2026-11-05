auto square = [](int x) consteval {
    return x * x;
    };

constexpr int a = square(10);
