constexpr int factorial(int n)
{
    int result = 1;

    for (int i = 2; i <= n; ++i)
        result *= i;

    return result;
}

// constant evaluation is successful
constexpr int x = factorial(5); // OK, 120
