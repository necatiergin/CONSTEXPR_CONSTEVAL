auto factorial = [](unsigned long long n) consteval {
    unsigned long long result = 1;

    for (unsigned i = 2; i <= n; ++i)
        result *= i;

    return result;
    };

constexpr auto x = factorial(5); // OK

