
#include <cmath>
#include <type_traits>
#include <iostream>

constexpr double sqrt_newton(double x)
{
    if (x <= 0.0)
        return 0.0;

    double guess = x;

    for (int i = 0; i < 100; ++i)
        guess = (guess + x / guess) / 2.0;

    return guess;
}

constexpr double square_root(double x)
{
    if (std::is_constant_evaluated()) {
        return sqrt_newton(x);
    }
    else {
        return std::sqrt(x);
    }
}

int main()
{
    constexpr double x = square_root(25.0);

    double value;
    std::cin >> value;

    double y = square_root(value);
}
